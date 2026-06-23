#include <iostream>
#include <stack>

using namespace std;


bool validateParanthesis(stack<char>&s, string parathesis){
    // cout << parathesis << endl;

    for (int i = 0; i < parathesis.length(); i++)
    {
        char c = parathesis[i];
        
        
        //for open brackets
        if (c == '(' || c == '{' || c == '['){
            s.push(c);
        }
        //for close brackets, check by top() and replace with correct closing brackets via pop()
        else{
            if (!s.empty()){
                char top = s.top();  //check via top()
                if (
                    (c == ')' && top == '(') || /*agar koi dosry type ka bracket ha tou given condt ke accord. correct closing bracket aye */
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')
                )
                {
                    s.pop(); //if incorrect bracket appears in the stack then pop it 
                }
                else{
                    return false;
                }

            }
            else{
                return false;
            }
        }

    }

    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
    

}


int main(int argc, char const *argv[])
{
    stack<char> s;
    // string parathesis = "()[]{}"; //True
    string parathesis = "([)]"; //False 


    cout << validateParanthesis(s, parathesis) << endl;
    return 0;
}

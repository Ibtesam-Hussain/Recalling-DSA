// LeetCode 9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        long rev_num = 0;
        
        //if negative value return false directly
        if(x < 0){
            return false;
        }

        int temp = x;
        while(temp != 0){
            rev_num = (rev_num * 10) + (temp % 10);
            temp = temp / 10;
        }
        if(rev_num == x){
            return true;
        }
        else{
            return false;
        }
    }
};
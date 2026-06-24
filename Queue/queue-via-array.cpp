//implementing queue using array


#include <iostream>
#include <queue>


using namespace std;

class Queue{
    public:
    int front=0;
    int rear=0;
    int size;
    int* arr;

    Queue(){
        this->front = 0;
        this->rear = 0;
        this->size = 5;
        arr = new int[size];
    }

    //destructor to prevent any mem leaks
    ~Queue(){
        delete[] arr;
    }

    //enqueue
    void insert(int data){
        if (rear == size){
            //it means queue is full
            cout << "Queue is full, cant insert" << endl; 
            return;
        }
        else{
            arr[rear] = data;
            rear++; //insert data and move rear ptr forward
        }
    }

    //dequeue
    void delete_(){
        if (front == rear){
            cout << "Queue is empty, insert to begin" << endl; 
            return;
        }
        else{
            cout << "Removed " << arr[front] << " from the queue" << endl;
            front++; //just disconnect the front ptr from 1st elem and point it to 2nd elem
        }
    }

    void print(){
        if (front == rear){
            cout << "Queue is empty" << endl;
        }

        cout << "Entire queue: " << endl;
        // for (int i = front; i < rear; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        int i = front;
        while (i < rear)
        {
            cout << arr[i] << " ";
            i++;
        }  
        cout << endl;
        cout << "Now front of queue is : " << arr[front] << endl;

    }

};





int main(int argc, char const *argv[])
{
    Queue* q = new Queue();
    q->insert(100); 
    q->insert(200);    
    q->insert(300);    
    q->insert(400);    
    q->insert(500);       

    q->print();

    q->delete_();
    q->print();

    q->insert(12);
    q->print();

    return 0;
}

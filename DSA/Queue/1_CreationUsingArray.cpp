#include<bits\stdc++.h>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this -> size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }    
    }

    void pop()
    {
        if (rear - front > 0)
        {
            arr[front] = 0;
            front++;
        }  

    }

    void peek()
    {
        cout << arr[front] << endl;
    }
};

int main()
{
    Queue q1(10);

    q1.push(20);
    q1.push(30);
    q1.push(40);

    q1.pop();
    q1.peek();
    

    q1.pop();
    q1.peek();
    

    q1.pop();
    q1.peek();
    

    q1.pop();
    q1.peek();
    
    return 0;
}
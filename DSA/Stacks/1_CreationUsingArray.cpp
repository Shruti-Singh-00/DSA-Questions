#include<bits\stdc++.h>
using namespace std;

class Stack
{
    public: 
    int *arr;
    int top;
    int size;
  
    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int d)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = d;
        }
        
        else
        {
            cout << "Stack overflow" << endl;
        }     
    }

    void pop()
    {
        if (top >= 0)
        {
            arr[top] = 0;
            top--;
        }
        
        else
        {
            cout << "Stack Underflow" << endl;
        }    
    }

    bool empty()
    {
        if (top == -1)
        {
            return 1;
        }
        
        else
        {
            return 0;
        }       
    }

    void peek()
    {
        if (top >= 0 && top < size) 
        {
            cout << arr[top] << endl;
        }
        
        else
        {
            cout << "Empty" << endl;
        }     
    }

};

int main()
{
    Stack s1(5);

    s1.push(10);
    s1.push(20);
    s1.push(30);

    s1.peek();
    
    s1.pop();

    s1.peek();
    
    s1.pop();

    s1.peek();
    
    s1.pop();

    s1.peek();
    
    if (s1.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
    
    return 0;
}
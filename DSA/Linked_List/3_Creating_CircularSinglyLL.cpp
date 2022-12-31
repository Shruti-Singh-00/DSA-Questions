#include<bits\stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor
    ~Node()
    {
        if (this -> next != NULL)
        {
            delete next;
            next = NULL;
        }
    }

    // Function to insert an element.
    void insertion(Node* &tail, int element, int d)
    {
        // empty list
        if (tail == NULL)
        {
            Node* new_node = new Node(d);
            tail = new_node;
        }
        
        // non-empty list
        else
        {
            Node* current = tail;
            while (current -> data != element)
            {
                current = current -> next;
            }   

            Node* temp = new Node(d);
            temp -> next = current -> next;
            current -> next = temp;        
        }      
    }


    // Function to traverse or to print all data...
    void print(Node* tail)
    {
        Node* temp = tail;

        do
        {
            cout << tail -> data << " ";
            tail = tail -> next;
        } while (tail != temp);
        
        cout<<endl;
    }

    // Function to delete a Node
    void del(Node* &tail, int value)
    {
        Node* previous = tail;
        Node* current = previous -> next;

        while (current -> data != value)
        {
            previous = current;
            current = current -> next;
        }

        if (current == tail)
        {
            previous = tail;
        }
        
        previous -> next = current -> next;
        current -> next = NULL;

        delete current;
    }
};


int main()
{
    Node* node1 = new Node(10);
    Node* tail = node1;
    
    node1 -> insertion(tail,10,20);
    node1 -> insertion(tail,20,30);
    node1 -> insertion(tail,20,25);
    node1 -> insertion(tail,10,15);
    node1 -> print(tail);

    node1 -> del(tail, 25);
    node1 -> print(tail);
    
    return 0;
}
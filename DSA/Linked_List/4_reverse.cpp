#include<bits\stdc++.h>
using namespace std;
 
class Node
{
public:
    int data;
    Node* next;
    
    // Parameterized Constructor
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
            this -> next = NULL;
        }
    }

    // Function to insert at head..
    void insertAtHead(Node* &head, int d)
    {
        Node* new_node = new Node(d);
        new_node -> next = head;
        head = new_node;
    }

    // Function to traverse or to print all data...
    void print(Node* &head)
    {
        Node* temp = head;

        while (temp != NULL)
        {
            cout<< temp -> data << " ";
            temp = temp -> next;
        }
        cout<<endl;
    }

    // Function reverse the linked list
    void reverse(Node* &head, Node* &tail)
    {
        Node* temp = tail;
        while (temp != head)
        {
            temp -> next = 
        }
        
    }
    

};

int main()
{
    
    return 0;
}
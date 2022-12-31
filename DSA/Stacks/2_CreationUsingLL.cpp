#include<bits\stdc++.h>
using namespace std;

class StackNode
{
public:
    int data;
    StackNode *next;

    // Parameterized Constructor
    StackNode(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor
    ~StackNode()
    {
        if (this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
    }

    // Function to push elements..
    void push(StackNode* &head, int d)
    {
        StackNode* new_node = new StackNode(d);
        new_node -> next = head;
        head = new_node;
    }

    // Function to show top element..
    int peek(StackNode* &head)
    {
        return head -> data;
    }

    // Function to delete a node..
    void pop(StackNode* &head)
    {
        // For first node..
        if (head -> next != NULL)
        {
            StackNode* temp = head;
            head = head -> next;
            // memory free
            temp -> next = NULL;
            delete temp;
        }
        
        //For last node..
        else
        {
            StackNode* previous = NULL;
            StackNode* current = head;

            previous -> next = current -> next;
            // memory free
            current -> next = NULL;
            delete current;

        }
    }

    // Function to check the given stack is empty or not..
    bool empty(StackNode* &head)
    {
        if (head -> next == NULL)
        {
            cout << "Empty" << endl;
            return 1;
        }
        else
        {
            cout << "Non-Empty" << endl;
            return 0;
        } 
    }
};

int main()
{
    StackNode* Node1 = new StackNode(10);
    StackNode* head = Node1;
    StackNode* tail = Node1;

    Node1 -> push(head,20);
    Node1 -> push(head,30);
    Node1 -> push(head,40);
    
    cout << head -> data << endl;
    cout << Node1 -> peek(head) << endl;
    Node1 -> pop(head);
    
    cout << head -> data << endl;
    cout << Node1 -> peek(head) << endl;
    Node1 -> pop(head);
    
    cout << head -> data << endl;
    cout << Node1 -> peek(head) << endl;
    Node1 -> pop(head);
    
    cout << head -> data << endl;
    cout << Node1 -> peek(head) << endl;
    Node1 -> pop(head);
    
    cout << head -> data << endl;
    cout << Node1 -> peek(head) << endl;
    Node1 -> pop(head);

    cout << Node1 -> empty(head) << endl;

    return 0;
}
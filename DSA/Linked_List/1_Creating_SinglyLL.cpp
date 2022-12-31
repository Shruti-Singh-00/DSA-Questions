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

    // Function to insert at tail..
    void insertAtTail(Node* &tail, int d)
    {
        Node* new_node = new Node(d);
        tail -> next = new_node;
        tail = new_node;
    }

    // Function to insert at given position..
    void insertAtPosition(Node* &tail, Node* &head, int position, int d)
    {
        // To insert at first node...
        if (position == 1)
        {
            insertAtHead(head,d);
            return;
        }
         
        // To insert at some position ...
        Node* temp = head;
        int count = 1;

        while(count < position-1)
        {
            temp = temp -> next;
            count++;
        }

        // to insert at last node...
        if (temp -> next == NULL)
        {
            insertAtTail(tail,d);
            return;
        }

        Node* new_node = new Node(d);
        new_node -> next = temp -> next;
        temp -> next = new_node;

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

    // Function to delete a node..
    void del(Node* &tail, Node* &head, int position)
    {
        // For first node..
        if (position == 1)
        {
            Node* temp = head;
            head = head -> next;
            // memory free
            temp -> next = NULL;
            delete temp;
        }
        
        // For any node in between and last node..
        else
        {
            Node* previous = NULL;
            Node* current = head;
            int count = 1;

            while(count < position)
            {
                previous = current;
                current = current -> next;
                count++;
            }

            // updating tail after deleting last node..
            if (current -> next == NULL)
            {
                tail = previous;
            }
            
            previous -> next = current -> next;
            // memory free
            current -> next = NULL;
            delete current;

        }
    }

    // Function to find length of Singly Linked List..
    int length(Node* &head)
    {
        Node* temp = head;
        int len = 0;

        while (temp != NULL)
        {
            len++;
            temp = temp -> next;
        }
        cout << endl;

        return len;
    }

};

int main()
{
    Node* Node1 = new Node(10);
    Node* head = Node1;
    Node* tail = Node1;

    Node1 -> insertAtHead(head,8);
    Node1 -> insertAtTail(tail,12);
    Node1 -> insertAtTail(tail,15);
    Node1 -> insertAtPosition(tail,head,4,25);
    Node1 -> insertAtPosition(tail,head,3,22);
    Node1 -> insertAtPosition(tail,head,1,5);

    Node1 -> print(head);

    Node1 -> del(tail,head,1);

    Node1 -> print(head);

    Node1 -> del(tail,head,4);

    Node1 -> print(head);

    cout<< "value of tail : " << tail -> data << endl;

    Node1 -> del(tail,head,5);

    Node1 -> print(head);

    cout<< "value of tail : " << tail -> data << endl;

    cout<< "Length of given linked list is : " << Node1 -> length(head) << endl;
    
    return 0;
}
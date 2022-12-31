#include<bits\stdc++.h>
using namespace std;

class Dnode
{
    public:
    Dnode* previous;
    int data;
    Dnode* next;

    // Constructor
    Dnode(int data)
    {
        this -> data = data;
        this -> previous = NULL;
        this -> next = NULL;
    }

    // Destructor
    ~Dnode()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }

    // insert at head
    void insertAtHead(Dnode* &head, int d)
    {
        Dnode* temp = new Dnode(d);

        // for empty linked list
        if (head == NULL)
        {
            head = temp;
        }
        
        temp -> next = head;
        head -> previous = temp;
        head = temp;
    }

    // function to insert data at tail in linked list
    void insertAtTail(Dnode* &tail, int d)
    {
        Dnode* temp = new Dnode(d);

        // for empty linked list
        if (tail == NULL)
        {
            tail = temp;
        }

        temp -> previous = tail;
        tail -> next = temp;
        tail = temp;
    }

    // function to insert data at given position in linked list
    void insertAtPosition(Dnode* &tail, Dnode* &head, int position, int d)
    {
        Dnode* new_node = new Dnode(d);
        Dnode* temp = head;
        int count = 1;

        // to insert at first node
        if (position == 1)
        {
            insertAtHead(head,d);
            return;
        }

        while (count < position-1)
        {
            temp = temp -> next;
            count++;
        }

        // to insert at last node
        if (temp -> next == NULL)
        {
            insertAtTail(tail,d);
            return;
        }

        // to insert at some position
        new_node -> next = temp -> next;
        temp -> next -> previous = new_node;
        temp -> next = new_node;  
        new_node -> previous = temp;   
    }

    // Function to delete a node..
    void del(Dnode* &tail, Dnode* &head, int position)
    {
        // For first node..
        if (position == 1)
        {
            Dnode* temp = head;
            temp -> next -> previous = NULL;
            head = head -> next;
            // memory free
            temp -> next = NULL;
            delete temp;
        }
        
        // For any node in between and last node..
        else
        {
            Dnode* pre = NULL;       // pre = previous node
            Dnode* current = head;   // current node
            int count = 1;

            while(count < position)
            {
                pre = current;
                current = current -> next;
                count++;
            }

            // updating tail after deleting last node..
            if (current -> next == NULL)
            {
                tail = pre;
            }
            
            pre -> next = current -> next;
            current -> next -> previous = pre;
            // memory free
            current -> next = NULL;
            current -> previous = NULL;
            delete current;
        }
    }

    // to print all values
    void printUsingHead(Dnode* &head)
    {
        Dnode* temp = head;
        while (temp != NULL)
        {
            cout << temp -> data << endl;
            temp = temp -> next;
        }
        cout<< endl;
    }

    // to print all values
    void printUsingTail(Dnode* &tail)
    {
        Dnode* temp = tail;
        while (temp != NULL)
        {
            cout << temp -> data << endl;
            temp = temp -> previous;
        }
        cout<< endl;
    }

    // function to find length of given doubly linked list
    int len(Dnode* &head)
    {
        Dnode* temp = head;
        int len = 0;
        while (temp != NULL)
        {
            temp = temp -> next;
            len++;
        }
        return len;
    }
};

int main()
{
    Dnode* Node1 = new Dnode(20);
    Dnode* head = Node1;
    Dnode* tail = Node1;

    Node1 -> insertAtHead(head, 10);    // at head
    Node1 -> insertAtTail(tail, 30);    // at tail

    Node1 -> insertAtPosition(tail,head,2,25);     // at middle
    Node1 -> insertAtPosition(tail,head,1,5);      // at first
    Node1 -> insertAtPosition(tail,head,6,50);     // at last

    Node1 -> printUsingHead(head);

    Node1 -> del(tail,head,5);     // delete function

    Node1 -> printUsingHead(head);
    Node1 -> printUsingTail(tail);

    cout << "Value of head :" << head -> data <<endl;
    cout << "Value of tail :" << tail -> data <<endl;

    cout << "Length :" << Node1 -> len(head) <<endl;    // length function

    return 0;
}
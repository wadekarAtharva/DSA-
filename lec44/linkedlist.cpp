#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){

        int value=this->data;

        //memory free
        if (this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        
    }
};

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    //
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // insert start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node d

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}



void deleteNode(Node* &head,int position){
    //deleting first Node
    if (position==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    else{

        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while (cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

        
        

    }
    
}

void print(Node *&head)
{

    if (head == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    // print(head);

    insertAtTail(tail, 12);

    // print(head);

    insertAtTail(tail, 15);
    // print(head);

    insertAtPosition(tail, head, 4, 22);
    // print(head);

    deleteNode(head,2);
    print(head);

    return 0;

}
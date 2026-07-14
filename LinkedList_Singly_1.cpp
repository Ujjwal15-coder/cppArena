#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next; //pointer to the next node

        Node(int data){ // Constructor
            this->data = data; // Assigning value to data
            this->next = NULL; // Assigning NULL to next

        }

        ~Node() {
            int value = this -> data;
            //memory free

            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "memory is free for node with data " << value << endl;
        }
};

void InsertAtHead(Node* &head,int d){

    Node* temp = new Node(d); // Create a new node
    temp -> next = head; // Point the new node to the head
    head = temp; // Make the new node the head
 }

 void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp; 
    tail = temp; // tail = tail -> next 
 }



 void InsertAtPosition(Node* &tail,Node* &head,int position,int data){
    if(position == 1){
        InsertAtHead(head,data);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    // Traverse till the second last Node 
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        InsertAtTail(tail,data);
        return;
    }

    // Create New Node to insert
    Node* NodeToInsert = new Node(data);
    NodeToInsert -> next = temp -> next;
    temp -> next = NodeToInsert;
 }

 void deleteNode(int position,Node* &head){

    //deletion at starting node
    if(position == 1){ 
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp; //make the memory free after deletion
    }
    else{

        Node* curr = head;
        Node* prev = NULL; //prev node ke liye pahla pointer null hota hai

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next; //deleting the last node
        curr -> next = NULL;
        delete curr; //to make the memory free after deletion
    }
 }


 void print(Node* &head){ // Print the linked list

    Node* temp = head; // Create a temporary pointer to the head

    while(temp != NULL){ // Loop until the pointer is NULL
        cout << temp -> data << " "; // Print the data of the current node
        temp = temp -> next; // Move to the next node
    }
    cout << endl; // Print a new line
 }

int main()
{
    Node* node1 = new Node(20); // Creating a new node
    cout << node1 -> data << endl; // Value of data
    cout << node1 -> next << endl; // Address of next
   
    cout << "Printing Head Node below" << endl;
    Node* head = node1; //head is pointing to new node1
    print(head);
    Node*tail = node1;

    cout << endl;

    cout << "Inserting 12 at head" << endl;
    InsertAtHead(head,12);
    print(head);

    cout << "Inserting 15 at head" << endl;
    InsertAtHead(head,15);
    print(head);

    cout << endl;

    cout << "Inserting 11 at tail/end" << endl;
    InsertAtTail(tail,11);
    print(head);

    cout << "Inserting 12 at tail/end" << endl;
    InsertAtTail(tail,12);
    print(head);

    cout << endl;
    

    cout << "Inserting at Position or Middle" << endl;
    InsertAtPosition(tail,head,3,300);
    print(head);

    cout << "Inserting at Position 1 or Head again"<<endl;
    InsertAtPosition(tail,head,7,100);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    cout << "-------------------*******DELETION START*******--------------------" << endl;

    cout << "Deleting node at 1(staring positon) " << endl;
    deleteNode(1,head);
    print(head);

    cout << "Deleting node at position 2" << endl;
    deleteNode(2,head);
    print(head);

    cout << "Deleting node at position 4" << endl;
    deleteNode(4,head);
    print(head);




}
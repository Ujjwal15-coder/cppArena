#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
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


//traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;
}

//gives length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}


void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);

    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void InsertAtPosition(Node* &tail,Node* &head,int position,int d){

     if(position == 1){
        InsertAtHead(head,d);
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
        InsertAtTail(tail,d);
        return;
    }

    Node* NodeToInsert= new Node(d);
    NodeToInsert -> next = temp -> next;
    temp -> next -> prev = NodeToInsert;
    temp -> next = NodeToInsert;
    NodeToInsert -> prev = temp;
}


void deleteNode(int position,Node* &head){

    //deletion at starting node
    if(position == 1){ 
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
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

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr; //to make the memory free after deletion
    }
 }


int main() {
  Node* node1 = new Node(10);
  Node* head = node1;
  Node* tail = node1;


  print(head);

  cout << getLength(head) << endl;
  InsertAtHead(head,11);
  print(head);

 InsertAtHead(head,12);
  print(head);

 InsertAtHead(head,13);
  print(head);
  

  InsertAtTail(tail,13);
  print(head);

  InsertAtPosition(tail,head,2,44);
  print(head);

  deleteNode(1,head);
  print(head);

  deleteNode(4,head);
  print(head);

  return 0;
}


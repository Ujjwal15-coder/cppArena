    #include <iostream>
    using namespace std;
    class Node{
        public:
            int data;
            Node* next;
            Node(int data){
                this -> data = data;
                this -> next = NULL;
            }
            ~Node (){
                int value = this -> data;

                if(this -> next != NULL){
                    delete next;
                    this -> next = NULL;
                }
                 cout << "memory is free for node with data " << value << endl;
            }
    };

    void InsertNode(Node* &tail,int element,int d){
        //assuming that the element is present in the list

        //empty list
        if(tail == NULL){
            Node* newNode = new Node(d);
            tail = newNode;
            newNode -> next = newNode;
        }
        else{
            //non empty list
            //assuming that the element is present in thr list
            Node* curr = tail;
            while(curr -> data != element){
                curr = curr -> next;
            }

            //element found -> curr 
            Node* temp = new Node(d);
            temp -> next = curr -> next;
            curr -> next = temp;
        }
    }


    void print(Node* tail){
        Node* temp = tail;
        

        // while(tail -> next != temp){
        //     cout << tail -> data << " ";
        // }

        do{
            cout << tail -> data <<" ";
            tail = tail -> next;
        } while (tail != temp);
        cout << endl;
        
    }

    int main() {
      
        Node* tail = NULL;

        //empty list me insert kar rahe hai
        InsertNode(tail, 5 , 3);
        print(tail);

        InsertNode(tail, 3 , 5);
        print(tail);

        InsertNode(tail, 5 , 7);
        print(tail);

        InsertNode(tail, 7, 9);
        print(tail);
        
        //inserting at middle
        InsertNode(tail, 5 , 6);
        print(tail);

        //inserting between the nodes
        InsertNode(tail, 7 , 8);
        print(tail);

        //inaerting at first
        InsertNode(tail, 3 , 4);
        print(tail);

      return 0;
    }
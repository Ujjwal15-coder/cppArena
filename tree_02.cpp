#include<iostream>
#include<vector>
using namespace std;
    class node{
        public:
        int data;
        node* left;
        node* right;

        node(int val){
            data = val;
            left = right = NULL;
            
        }
    };
    static int idx = -1;
    node* buildTree(vector<int> &tree){
        idx++;

        if(tree[idx] == -1){
            return NULL;
        }

        node* root = new node(tree[idx]);
        root -> left = buildTree(tree);
        root -> right = buildTree(tree);
        return root;
    }

    int height(node* root){
        if(root == nullptr){
            return 0;
        }
        int leftHT = height(root -> left);
        int rightHT = height(root -> right);

        return 1 + max(leftHT,rightHT);
    }
    int countNodes(node* root){
        if(root == nullptr)
            return 0;
        
        int leftCount = countNodes(root -> left);
        int rightCount = countNodes(root -> right);
        return 1 + leftCount + rightCount;
    }
    int sumOfNodes(node* root){
        if(root == nullptr){
            return 0;
        }
        int leftSum = sumOfNodes(root -> left);
        int rightSum = sumOfNodes(root -> right);

        return root -> data + leftSum + rightSum;
    }
int main(){
    vector<int> tree = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    node* root = buildTree(tree);
    
    cout << root -> data << endl;
    cout << root -> left -> data << endl;
    cout << root -> right -> data << endl;

    cout << "Height of the tree is: " << height(root) << endl;

    cout <<"Total number of nodes: "<< countNodes(root) << endl;

    cout <<"Sum of all nodes: "<< sumOfNodes(root) << endl; 





    
}
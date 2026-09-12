//Largest BST in a Binary Tree

class Info{
    public:
    int min;
    int max;
    int size;

    Info(int min,int max,int size){
        this -> min = min;
        this -> max = max;
        this -> size = size;
    }
};


Info helper(Node* root){
    if(root == NULL){
        return {INT_MAX,INT_MIN,0};
    }

    Info left = helper(root -> left);
    Info right = helper(root -> right);

    if(root -> data > left.max && root -> data < right.min){
        int currMIN = min(root -> data,left.min);
        int currMAX = max(root -> data,right.max);
        int currSize = left.size + right.size + 1;

        return Info(currMIN,currMAX,currSize);

    }
    else{
        return {INT_MIN,INT_MAX,max(left.size,right.size)};
    }

}
int largestBST(Node* root){
    return helper(root).size;
}
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
    int dfs(Node* root , int& res){
        if(root == NULL) return 0;
        int left = dfs(root->left,res);
        int right = dfs(root->right,res);
        res = max(res,left+right+1);
        return max(left,right)+1;
    }
    int diameter(Node* root) {
        // Your code here
        int res = INT_MIN;
        dfs(root,res);
        return res-1;
        
    }
};
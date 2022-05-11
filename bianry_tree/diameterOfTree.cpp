// problrm link https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

class Solution {
  public:
    int height(struct Node* node){
        if(node==NULL)
        return 0;
        
        int left = height(node->left);
        int right = height(node->right);
        
        return max(left,right) +1;
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        if(root==NULL)
        return 0;
        int dialeft = diameter(root->left);
        int diaright = diameter(root->right);
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        
        return max(dialeft,max(diaright,leftHeight+rightHeight+1));
    }
};
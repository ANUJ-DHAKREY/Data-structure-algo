// problem link https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

class Solution {
public:
    void lefttraverse(Node* root, vector<int> &ans){
        if(root==NULL)
            return;
        if(root->left or root->right)
            ans.push_back(root->data);
        
        if(root->left){
            lefttraverse(root->left,ans);
        }
        else{
            lefttraverse(root->right,ans);
        }
    }
    void leaftraverse(Node* root, vector<int> &ans){
        if(root==NULL)
            return;
        if(root->left==NULL and root->right==NULL){
            ans.push_back(root->data);
        }
        leaftraverse(root->left,ans);
        leaftraverse(root->right,ans);
    }
    void righttraverse(Node *root,vector<int> &ans){
         if(root==NULL)
            return;
        if(root->right){
            righttraverse(root->right,ans);
        }
        else{
            righttraverse(root->left,ans);
        }
        if(root->left or root->right)
            ans.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        ans.push_back(root->data);
        if(root->left)
        lefttraverse(root->left,ans);
        if(root->right or root->left)
        leaftraverse(root,ans);
        if(root->right){
        righttraverse(root->right,ans);
        }
        return ans;
    }
};
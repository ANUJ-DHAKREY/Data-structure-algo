// problrm link https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

class Solution{
    public:
    pair<int,bool> heightdiff(Node* root){
        if(root==NULL)
            return {0,true};
        auto it = heightdiff(root->left);
        auto it1 = heightdiff(root->right);
        if(it.second == false or it1.second==false)
            return {0,false};
        if(abs(it.first-it1.first) <2)
            return {max(it1.first,it.first)+1,true};
        else
            return {max(it1.first,it.first),false};
         
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        auto it  = heightdiff(root);
        return it.second;
    }
};
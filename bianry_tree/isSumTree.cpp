// problem link https://practice.geeksforgeeks.org/problems/sum-tree/1

class Solution
{
    public:
    pair<int,bool> issum(Node* root){
        if(root==NULL)
            return {0,true};
        if(root->left==NULL and root->right==NULL){
             return {root->data,true};
        }
        auto it1 = issum(root->left);
        auto it2 = issum (root->right);
        if(it1.second==false or it2.second==false){
            return {0,false};
        }
        if(it1.first + it2.first == root->data)
            return {2*root->data,true};
        else
            return {root->data,false};
    }
    bool isSumTree(Node* root)
    {
        auto it = issum(root);
        return it.second;
    }
};
//   problem link https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1


class Solution
{
public:
     void findsum(Node* root,pair<int,int> &ans,int level,int sum){
             if(root==NULL){
                return;
             }
             if(!root->left and !root->right){
                 if(level >ans.second){
                     ans = {sum +root->data,level};
                     return;
                 }
             }
             if(!root->left and !root->right){
                 if(level == ans.second and sum + root->data>ans.first){
                     ans = {sum+root->data,level};
                     return;
                 }
             }
             findsum(root->left,ans,level+1,sum+root->data);
             findsum(root->right,ans,level+1,sum+root->data);
     }
    
    int sumOfLongRootToLeafPath(Node *root)
    {   
        if(root == NULL)
        return 0;
        pair<int,int> ans ={0,1};
        findsum(root,ans,1,0);
        return ans.first;
    }
};
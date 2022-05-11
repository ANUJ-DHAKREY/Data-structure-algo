// problem link https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1


class Solution
{
    public:
    void recursion(Node* root, int level, vector<int> &ans){
    if(root==NULL)
        return;
    if(ans.size()==level)
        ans.push_back(root->data);
    recursion(root->right,level+1,ans);
    recursion(root->left,level+1,ans);
}
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
      vector<int> ans;
      recursion(root,0,ans);
      return ans;
    }
};

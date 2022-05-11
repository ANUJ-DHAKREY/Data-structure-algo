// problrm link https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

class Solution
{
    public:
    void recursion(Node*root,map<int,int> &s,int level){
        if(root==NULL)
            return;
         if(s.find(level)==s.end()){
            s[level] = root->data;
        }
        recursion(root->left,s,level-1);
        recursion(root->right,s,level+1);
       
    }
    
    vector<int> topView(Node *root)
    {
        map<int,int> s;
        vector<int>  ans;
        recursion(root,s,0);
        for(auto it:s){
            ans.push_back(it.second);
        }
        return ans;
    }

};
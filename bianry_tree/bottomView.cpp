// problem link https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> bottomView(Node *root)
    {
        map<int,int> m;
        vector<int> ans;
        queue<pair<Node*,int>> que;
        que.push({root,0});
        while(!que.empty()){
            auto it = que.front();
            Node * node = it.first;
            int level = it.second;
            que.pop();
             m[level]=node->data;
            
            if(node->left){
                que.push({node->left,level-1});
            }
            if(node->right){
                que.push({node->right,level+1});
            }
        }
       
       for(auto it: m){
           ans.push_back(it.second);
       }
       return ans;
    }

};
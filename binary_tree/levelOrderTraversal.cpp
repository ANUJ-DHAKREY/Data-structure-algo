//  problem link https://practice.geeksforgeeks.org/problems/level-order-traversal/1

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      queue<Node*> que;
      vector<int> ans;
      que.push(node);
     while(!que.empty()){
          Node* temp = que.front();
          que.pop();
          ans.push_back(temp->data);
          if(temp->left)
          que.push(temp->left);
          if(temp->right)
          que.push(temp->right);
      }
      return ans;
    }
};
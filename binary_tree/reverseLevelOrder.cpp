// problrm link https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1

vector<int> reverseLevelOrder(Node *root)
{
     queue<Node*> q;
   q.push(root);
   vector<int> v;
  
   while(!q.empty())
   {
       Node* top=q.front();
    
       v.push_back(top->data);
       q.pop();
       
       if(top->right!=NULL)
       q.push(top->right);
       
       if(top->left!=NULL)
       q.push(top->left);
       
   }
   
   reverse(v.begin(), v.end());
   return v;
   
}
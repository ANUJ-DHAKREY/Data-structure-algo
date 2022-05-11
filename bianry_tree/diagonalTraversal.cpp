// problem link  https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1

void foo(vector<int> &ans,Node *A){
    if(A==NULL)
        return;
    queue<Node*> que;
    que.push(A);
    while(!que.empty()){
        Node* temp = que.front();
        que.pop();
        while(temp){
            if(temp->left)
            que.push(temp->left);
            ans.push_back(temp->data);
            temp = temp->right;
        }
    }
 }
vector<int> diagonal(Node *A)
{
    vector<int> ans;
     foo(ans,A);   
     return ans;
}
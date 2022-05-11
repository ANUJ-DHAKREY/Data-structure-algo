// problem link https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1

class Solution{
  public:
 bool ans=1,f=1;
 int height=1;

 void show(Node* root,int l)
 {
   if(!root) return;   
     if(!root->left && !root->right) {
         if(f){
            f=0; 
            height=l;
         }
         if(height!=l) ans=0;
     }
     
     show(root->left,l+1);
     show(root->right,l+1);
 }
   /*You are required to complete this method*/
   bool check(Node *root)
   {
       //Your code he
       if(!root) return false;
       
       show(root,1);
       return ans;
   }
};
// problem link https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
    	queue<Node*> que;
    	bool level = true;
    	que.push(root);
    
    	while(!que.empty()){
    	    int size = que.size();
    	    vector<int> temp(size);
    	    for(int i=0; i<size; i++){
    	        Node* node = que.front();
    	        que.pop();
    	        int index = (level) ? i:size-1-i;
    	        temp[index] = node->data;
    	        if(node->left)
    	            que.push(node->left);
    	        if(node->right)
    	            que.push(node->right);
    	    }
    	   // if(level%2==0)reverse(temp.begin(),temp.end());
    	    level = !level;
    	    for(int i=0; i<temp.size();i++) ans.push_back(temp[i]);
    	}
    	return ans;
    }
};
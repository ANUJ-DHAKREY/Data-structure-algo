// problem link https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
  unordered_map<int,int> mp;
        stack<int> st;
        for(auto num: nums2){
            while(st.size() && st.top()<num){
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        vector<int> ans;
      for(auto num: nums1){
         auto it = mp.find(num);
          if(it!=mp.end()){
              ans.push_back(it->second);
          }
          else{
              ans.push_back(-1);
          }
      }
        return ans;
    }
};
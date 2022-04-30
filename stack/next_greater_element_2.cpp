// problrm link  https://leetcode.com/problems/next-greater-element-ii/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        stack<int> s;
            for(int i=0; i<nums.size(); i++){
            while(!s.empty() and nums[s.top()]<nums[i]){
                int temp = s.top();
                ans[temp] = nums[i];
                s.pop();
            }
                s.push(i);
        }
        for(int i=0; i<nums.size()-1; i++){
             while(!s.empty() and nums[s.top()]<nums[i]){
                int temp = s.top();
                ans[temp] = nums[i];
                s.pop();
            }
                s.push(i);
        }
        return ans;
    }
};
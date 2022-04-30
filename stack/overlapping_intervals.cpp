// problem link https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1/

  vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         sort(intervals.begin(),intervals.end());
         stack<vector<int>> s;
         vector<vector<int>> ans;
         s.push(intervals[0]);
         vector<int> temp;
         for(int i=1; i<intervals.size();i++){
             temp = s.top();
             if(intervals[i][0]<= temp[1]){
                 temp[1] = max(intervals[i][1],temp[1]);
                 s.pop();
                 s.push(temp);
             }
             else{
                 temp = s.top();
                 ans.push_back(temp);
                 s.pop();
                 s.push(intervals[i]);
             }
         }
         temp = s.top();
         s.pop();
         ans.push_back(temp);
         return ans;
    }
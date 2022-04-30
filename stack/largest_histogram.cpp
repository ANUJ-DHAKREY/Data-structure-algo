// problem link  https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1
long long getMaxArea(long long arr[], int n)
    {
        vector<long long> right(n,n);
        vector<long long> left(n,-1);
        stack<long long> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[i]<arr[st.top()]){
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[i]<arr[st.top()]){
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }  
        
         long long area=0;
        for(int i=0; i<n; i++){
            area = max(arr[i] * (right[i]-left[i]-1),area);
        }
        return area;
    }
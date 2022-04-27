#include <bits/stdc++.h>
using namespace std;

int main() {
 int t; 
   cin >> t;
   while(t){
    int k,n,m;
    cin >> k >> n >>m;
    string s;
    cin >>s;
    if(n>m){
        sort(s.begin(),s.end(),greater<int>());  
    }else{
           sort(s.begin(),s.end());
    }
    cout << s;
  
    int sum =0;
    for(int i=0,j=1; j<k; i++,j++){
    	if(s[i]=='0' and s[j]=='1'){
        sum = sum +n;
    	}
    	if(s[i]=='1' and s[i]=='0'){
            	sum += m;
    	}
    }
    cout << sum <<endl;
    t--;
   }
    return 0;
}
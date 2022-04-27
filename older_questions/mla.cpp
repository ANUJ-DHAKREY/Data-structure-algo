#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,m,vil;
   cin >>n>>m>>vil;
   vector<int> arr;
   int temp;
   for(int i=0; i<vil; i++){
   	cin >> temp;
   	arr.push_back(temp);
   }
  if(m>n){
  	int temp =n;
  	n=m;
  	m=temp;
  }
  sort(arr.begin(),arr.end());
  int time1=max(arr[0],arr[1])*m;
  int time2=min(arr[0],arr[1])*n;
  cout << time1<<" " << time2 <<" "<< endl;
  for(int i=2; i<vil; i++){
    time2+=arr[i]*n;
    if(time2>time1){
    time1+= arr[i]*m;
    time2-= arr[i]*n;
    }
    cout << time1<<" " << time2 <<" "<< endl;
  }
  cout << time1;
  
    return 0;
}
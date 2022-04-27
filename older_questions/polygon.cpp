#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
  int x[n];
  int y[n];
  for(int i=0; i<n; i++){
  	cin >> x[i] >> y[i];
  }
  int count=1;
  int xdiff;
  int ydiff;
  int slope =INT_MIN;
  int prevslope;
  for(int i=1; i<n; i++){
   xdiff =x[i]-x[i-1];
   ydiff=y[i]-y[i-1];
   prevslope=slope;
   if(xdiff==0){
   	slope =INT_MAX;
   	// cout << slope << endl;
   }
   else{
   	slope =ydiff/xdiff;
   	// cout << slope << endl;
   }
  if(slope!=prevslope){
    count++;
  }
  }
  cout << count;
  
    return 0;
}
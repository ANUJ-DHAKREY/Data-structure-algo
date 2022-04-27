#include<iostream>
#include<climits>
using namespace std;
int maxsum(int a[], int n){
int min = INT_MAX, max1 = INT_MIN;
int s1 =0, s2 =0, s=0;
for(int i=0; i<n; i++){
    s = s+a[i];
    s1 = s1 + a[i];
    if(s1>max1){
        max1 = s1;
    } 
    if(s1<0){
        s1=0;
    }
    s2 = s2 + a[i];
    if(s2<min){
        min = s2;
    }
    if(s2>0){
        s2 =0;
    }
}
return max(max1,s-min);
} 
int main ()
{
  int t;
  cin >> t;
  while(t>0){
      int n;
      cin >> n;
      int a[n];
      for(int i=0; i<n; i++){
          cin >> a[i];
        }
       cout<< maxsum(a,n) << endl;
        t--;
  }

return 0;
}
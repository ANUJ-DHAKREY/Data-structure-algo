#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t,k;
    long long int n;
    cin >> t;
    while(t>0){
        cin >> n >> k;
        int x;
        long long int val=0;
        if(k==1)
        return n;
        
        for(int i=1; i<n; i++){
          val = pow(i,k);
         if(val>n){
             cout << i-1 <<endl;
             break;
         }
        
        }
        t--;
        
    }
    return 0;
}
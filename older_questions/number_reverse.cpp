#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
long long int n;
cin >> n;
long long  int ans =0;
int i=0;
while(n>10){
    int remain = n%10;
if(9-remain>remain){
  ans = ans + pow(10,i) *remain;
}
else{
ans = ans + pow(10,i) *(9-remain);}

n = n/10;
i++;
} 
if(n==9){
ans = ans + pow(10,i) *n;	
}
else{
	if(9-n<n)
	ans = ans + pow(10,i) *(9-n);
     else
	 ans = ans + pow(10,i) *n;

}
cout << ans;
return 0;
}
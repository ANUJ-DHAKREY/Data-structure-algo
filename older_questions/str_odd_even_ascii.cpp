#include<iostream>
#include<cstring>
using namespace std;
int main(){
string s;
cin >> s;
int n= s.size();
for(int i=0; i<n; i++){
if(i%2==0){
s[i]=s[i]+1;
cout << s[i];
}
else{
s[i]=s[i]-1;
cout<< s[i];
}
}

    return 0;
}
#include<iostream>
#include<cstring>
 using namespace  std;
 int main(){
string s;
cin >> s;
int n= s.size();
int a[26]={0} ;
for(int i=0; i<n; i++){
  int idx = s[i] - 'a';
  a[idx]++;  
}   
char res;
int max=0;
for(int i=0; i<n; i++){
   if(a[i]> max){
   max =a[i];
   res = i + 'a';}

   }  
   cout << res;
     return 0;

 }    
 
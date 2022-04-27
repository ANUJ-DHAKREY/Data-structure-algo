// #include<iostream>
// #include<cstring>

// using namespace std;

// int main(){
//     string s;
//     cin >> s;
//     int n = s.size();
//     // char c = s[0];
//     for(int i =1; i<n; i++){
  
//     if(s[i]=!s[i+1])
//       cout<<s[i];
//     }
//     cout << s[n-1];

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 

string removeDuplicates(string s){
     
   int n = s.length();
   string str="";
   
   if (n == 0)
     return str;
 
   
    for(int i=0;i<n-1;i++){
   
        if(s[i]!=s[i+1]){
            str+=s[i];
        }
    }
  
   str.push_back(s[n-1]);
   return str;   
}
  
int main() {
      
    string s;
  cin >> s;
  cout << removeDuplicates(s);
      
    return 0;
}
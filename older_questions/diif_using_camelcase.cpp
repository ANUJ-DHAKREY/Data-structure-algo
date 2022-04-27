#include<iostream>
#include<cstring>

using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    string str = "";
    cout <<s[0];
    for(int i=1;i<n; i++){
     if(s[i] <= 90){
         str.push_back(10);
      str.push_back(s[i]);

     }
     else{
         str.push_back(s[i]);
     }
    }
    cout << str ;
    return 0;
}
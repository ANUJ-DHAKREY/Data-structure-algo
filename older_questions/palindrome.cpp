#include<bits/stdc++.h>
#include<cstring>

using namespace std;

void isPalindrome(string S)
{
    
    string P = S;
    reverse(P.begin(), P.end());
 
    
    if (S == P) {
    
        cout <<  "true";
    }
    
    else {
        
        cout << "false";
    }
}
int main(){
    string a;
    cin >> a;

 isPalindrome(a);
return 0;
}

#include<iostream>
#include<cstring>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int count =1;
    char c = s[0];
    for(int i =1; i<n; i++){
    if(s[i]==c){
        count++;
    }
    else
    {
        if(count==1)
        cout << c;
        else
        cout << c << count;
        count = 1;
        c=s[i]; 
    }
    
    }
    if(count==1)
    cout << c;
    else
         cout << c << count;

    return 0;
}
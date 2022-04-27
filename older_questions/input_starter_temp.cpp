#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int mycompare(string x, string y){
    string a = x.append(y);
    string b = y.append(x);
   return a.compare(b) > 0 ? 1 : 0;
}
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        cin.ignore();
         vector <string> arr[n];
         for(int i=0; i<n; i++){
             getline(cin,arr[i]);
         }
         
         sort(arr, arr+n, mycompare);
         string  ans;
         for(int i=0; i<n; i++){
        
         }
    }
    return 0;
}
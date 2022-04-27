#include <bits/stdc++.h>
using namespace std;
int ans=0;
void substr(vector<string> &s,int n,int i,int r,string osf){
	
   if(i==n){
   	ans++;
   	if(ans ==r){
   		cout << osf<<endl;
   		return;
   	}
   	return;
   }
  
  substr(s,n,i+1,r,osf);
  substr(s,n,i+1,r,osf+s[i]);
}
int main() {
    
int n,r;
cin >> n >>r;
// cout << n<<r<<endl;
string str;
cin >>str;
// cout << str<<endl;
vector<string> s;
int siz=str.size();
for(int i=0; i<siz;i++){
	string temp="";
	while(str[i]!=',' and i!=siz){
		temp.push_back(str[i]);
		i++;
	}
	// cout << temp <<endl;
  s.push_back(temp);
}
// for(int i=0; i<s.size();i++){
// 	cout << s[i]<<endl;
// }

substr(s,n,0,r,"");
return 0;
}
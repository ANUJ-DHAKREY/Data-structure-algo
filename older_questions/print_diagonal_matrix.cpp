#include<iostream>
//1 2 3
//4 5 6
//7 8 9
using namespace std;

int main(){

int n,m;

cin >> n >> m;

int arr[n][m];

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin >> arr[i][j];
    }
}

int r=0,c=0;
bool up = true;
int ans[n*m];
int i=0;
while(r<n && c<m){
if(up){
    while(r>0 && c<m-1){
     ans[i] = arr[r][c];
     r++;
     c--;
     i++;
    }
    ans[i] = arr[r][c];
    i++;
    if(c==m-1)
    r++;
    else
    c++;
}
else{
    while(c>0 && r<n-1){
     ans[i] = arr[r][c];
     c++;
     r--;
     i++;
    }
    ans[i] = arr[r][c];
    i++;
    if(r==n-1)
    c++;
    else
    r++;
}
up=!up;
}

for(int i=0; i<m*n; i++){
    cout << ans[i] << " ";
}

return 0;
}
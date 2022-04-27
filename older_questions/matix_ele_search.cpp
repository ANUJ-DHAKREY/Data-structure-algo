#include<iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    int tar;
    cin >> tar;
    int res =0;
   /*3 30 38
    44 52 54
    57 60 69
    70 77 82*/
     int i=0, j=m-1, ele;
    while(i<n && j>=0){
        ele = arr[i][j];
        if(ele == tar)
        res=1;
        if(tar > ele)
        i++;
        else
        j--;
    }
    cout << res;
    return 0;
}

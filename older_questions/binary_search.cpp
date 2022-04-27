#include<iostream>

using namespace std;
int search(int arr[] ,int n, int m){
    int start =0, end=n-1;
    while(start<end){
        int mid = start + (end-start)/2;
        if(arr[mid] == m)
        return mid;
        else if(arr[mid]>m)
        end = mid-1;
        else
         start = mid+1;
    }
    return -1;
}

int main(){
    int n,m;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> m;
     int res =search(arr,n,m);
     cout << res;
    return 0;
}
// #include<iostream>

// using namespace std;

// int main(){
//     int m ,n;
//     cin >> n;
//     int a[n+1] = {0} ;
//     for (  int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cin >> m;

//     int b[m+1] = {0};
//     for (int i = 0; i < m; i++)
//     {
//         cin >>  b[i];
//     }
//     if(m>=n){
//     int carry =0;
//     int j = n-1;
//     for(int i=m-1; i>=0; i--){
//         int sum = a[j] +  b[i] + carry;
//          if(sum >9){
//          carry =1;
//          b[i+1] = sum % 10;
//          }
//          else{
//              b[i+1] = sum;
//              carry=0;
//             }
//             j--;
//              }
//              if(carry == 1)
//              b[0] = 1;
//              else
//              b[0] =0;
//     }
//     else{
//  int carry =0;
//     int j = m-1;
//     for(int i=n-1; i>=0; i--){
//         int sum = a[i] +  b[j] + carry;
//          if(sum >9){
//          carry =1;
//          a[i+1] = sum % 10;
//          }
//          else{
//              a[i+1] = sum;
//              carry=0;
//             }
//             j--;
//              }
//              if(carry == 1)
//              a[0] = 1;
//              else
//              a[0] =0;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int calSumUtil(int a[], int b[], int n, int m)
{
    int sum[n+1];

    int i = n - 1, j = m - 1, k = n;

    int carry = 0, s = 0;

    while (j >= 0)
    {

        s = a[i] + b[j] + carry;
        sum[k] = (s % 10);

        carry = s / 10;

        k--;
        i--;
        j--;
    }

    while (i >= 0)
    {

        s = a[i] + carry;
        sum[k] = (s % 10);
        carry = s / 10;

        i--;
        k--;
    }
    if(carry==1){
        sum[0] = 1;
    }

for (int i = 0; i <=n; i++)
{
 cout << sum[i] << ",  " ;
}

cout << "END" ;
return 0;

    
}

int calSum(int a[], int b[], int n, int m)
{
    if (n >= m) return calSumUtil(a, b, n, m);

    else return calSumUtil(b, a, m, n);
}

int main()
{

    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    calSum(a, b, n, m);

    return 0;
}
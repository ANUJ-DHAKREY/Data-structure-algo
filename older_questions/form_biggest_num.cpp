#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
bool compare(string a,string b)
{
    return a+b>b+a;
}
int main()
{   int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        string vec[n];
        
        for(int i{0};i<n;i++)
        {
    
            cin>>vec[i];
        }

        sort(vec,vec+n,compare); string str;
        for(int i{0};i<n;i++)
        {
            cout<<vec[i];
        }
        cout<<endl;
            t--;
        }
    return 0;
}
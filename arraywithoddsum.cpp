#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1296/problem/A

bool isSumOdd(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    if(sum%2==0)
    {
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if(isSumOdd(arr,n))
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(odd==0 or even==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
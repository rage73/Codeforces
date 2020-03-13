#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1323/problem/A

void evenSubsetSum(int a[], int n)
{
    if(n==0)
    {
        cout<<"-1"<<endl;
    }
    else if(n==1)
    {
        if(a[0]%2==0)
        {
            cout<<"1"<<endl<<"1"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    else
    {
        if(a[0]%2==0)
        {
            cout<<"1"<<endl<<"1"<<endl;
        }
        else if(a[1]%2==0)
        {
            cout<<"1"<<endl<<"2"<<endl;
        }
        else
        {
            cout<<"2"<<endl<<"1 2"<<endl;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        evenSubsetSum(a,n);
    } 
    return 0;
}
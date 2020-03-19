#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1326/problem/B

#define MOD 998244353;
typedef long long ll;

void makeA(int b[],int n)
{
    int a[n];
    a[0]=b[0];
    int x[n];
    x[0]=0;
    for(int i=1;i<n;i++)
    {
        x[i]=max(a[i-1],x[i-1]);
        a[i]=b[i]+x[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=max(a[i],0);
        cout<<a[i]<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    makeA(b,n);
    return 0;
}
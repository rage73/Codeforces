#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1324/problem/D
 
typedef long long ll;

int goodSubs(int a[],int b[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]>b[i]+b[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<goodSubs(a,b,n);
    return 0;
}
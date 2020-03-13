#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1324/problem/A
 
typedef long long ll;

bool areAllOdd(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0 and a[i]!=0)
        {
            return false;
        }
    }
    return true;
}

bool arePositive(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0)
        {
            return false;
        }
    }
    return true;
}

bool areAllEqual(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[0])
        {
            return false;
        }
    }
    return true;
}

int smallestIdx(int a[],int n)
{
    int idx=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[idx])
        {
            idx=i;
        }
    }
    return idx;
}
 
bool canClear(int a[],int n)
{
    if(n<=1 or areAllEqual(a,n))
    {
        return true;
    }
    int small=smallestIdx(a,n);
    a[small]+=2;
    small=smallestIdx(a,n);
    int diff=a[small];
    for(int i=0;i<n;i++)
    {
        a[i]-=diff;
    }
    while(!arePositive(a,n))
    {
        int small=smallestIdx(a,n);
        a[small]+=2;
    }
    small=smallestIdx(a,n);
    diff=a[small];
    for(int i=0;i<n;i++)
    {
        a[i]-=diff;
    }
    if(areAllEqual(a,n))
    {
        return true;
    }
    if(areAllOdd(a,n))
    {
        return false;
    }
    return canClear(a,n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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
        cout<<(canClear(a,n)?"YES":"NO")<<endl;
    }
    return 0;
}
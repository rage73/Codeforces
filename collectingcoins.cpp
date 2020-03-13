#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1294/problem/A

typedef long long ll;
bool isDistributable(ll a,ll b,ll c,ll n)
{
    ll sum=a+b+c+n;
    if(sum%3!=0)
    {
        return false;
    }
    if(a==b && a==c)
    {
        return true;
    }
    ll rich=max(a,max(b,c));
    ll richsum=3*rich-a-b-c;
    if(richsum>n)
    {
        return false;
    }
    return true;
}
int main()
{
    ll t;
    cin>>t;
    ll a,b,c,n;
    while (t--)
    {
        cin>>a>>b>>c>>n;
        cout<<(isDistributable(a,b,c,n)?"YES":"NO")<<endl;
    }
    return 0;
}
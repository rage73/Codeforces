#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1303/problem/B

typedef long long ll;

ll minNoDays(ll n,ll g,ll b)
{
    ll req=(n+1)/2;
    if(req<=g)
    {
        return n;
    }
    ll days=0;
    ll reqgood=floor(req/g);
    while(reqgood--)
    {
        days+=(g+b);
    }
    if(req%g!=0)
    {
        days+=(req%g);    
    }
    else
    {
        days-=b;
    }
    if(days<n)
    {
        return n;
    }
    return days;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,g,b;
        cin>>n>>g>>b;
        cout<<minNoDays(n,g,b)<<endl;
    }
    return 0;
}
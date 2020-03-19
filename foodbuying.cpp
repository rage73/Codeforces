#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1296/problem/B

typedef long long ll;

ll maxCashback(ll temp)
{
    //cout<<temp<<endl;
    if(temp<10)
    {
        return 0;
    }
    ll cb=temp/10;
    temp-=10*cb;
    return cb+maxCashback(temp+cb);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll s;
        cin>>s;
        cout<<s+maxCashback(s)<<endl;
    }
    return 0;
}
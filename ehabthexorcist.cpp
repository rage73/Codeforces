#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1325/problem/D

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll u,v;
    cin>>u>>v;
    if(u==v)
    {
        if(u==0)
        {
            cout<<0;
        }
        else
        {
            cout<<1<<endl<<u;
        }
    }
    else if(v-u<0)
    {
        cout<<"-1";
    }
    else if((v-u)%2==0)
    {
        ll x=(v-u)/2;
        if(!(x&u))
        {
            cout<<2<<endl<<u+x<<" "<<x;
        }
        else
        {
            cout<<3<<endl<<x<<" "<<x<<" "<<u;
        }
    }
    else
    {
        cout<<"-1";
    }
        
    return 0;
}
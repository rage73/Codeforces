#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/227/B

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int a[n],pos[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        pos[a[i]]=i;
    }
    int q;
    cin>>q;
    ll vas=0,pet=0;
    while(q--)
    {
        int b;
        cin>>b;
        int i=pos[b];
        vas+=(i+1);
        pet+=(n-i);
    }
    cout<<vas<<" "<<pet;    
    return 0;
}
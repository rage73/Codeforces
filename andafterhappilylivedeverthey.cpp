#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1331/problem/C

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    cin>>x;
    int bits[6]={};
    int i=5;
    while(x!=0)
    {
        bits[i]=x/(1<<(i));
        x-=(bits[i]*(1<<(i)));
        i--;
    }
    swap(bits[0],bits[4]);
    swap(bits[2],bits[3]);
    i=0;
    int ans=0;
    while(i<6)
    {
        ans+=bits[i]*(1<<i);
        i++;
    }
    cout<<ans;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1331/problem/B

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
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            cout<<i<<x/i;
            break;
        }
    }
    return 0;
}
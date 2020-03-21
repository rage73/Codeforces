#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/248/A

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
    int lo=0,lc=0,ro=0,rc=0;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;

        if(l)
            lo++;
        else
            lc++;
        
        if(r)
            ro++;
        else
            rc++;
    }
    cout<<min(lo,lc)+min(ro,rc);
    return 0;
}
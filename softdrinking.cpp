#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/151/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ml,sl,sa;
    ml=(k*l)/nl;
    sl=c*d;
    sa=p/np;
    cout<<(min(ml,min(sl,sa))/n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1328/problem/B

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string ans="";
        for(int i=0;i<n;i++)
        {
            ans+="a";
        }
        int j,cnt;
        for(j=1;k-j>0;j++)
        {
            k-=j;
        }
        ans[n-1-j]='b';
        ans[n-k]='b';
        cout<<ans<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/155/A

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
    int mini,maxi,ans;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(i==0)
        {
            maxi=mini=k;
        }
        else if(k<mini)
        {
            mini=k;
            ans++;
        }
        else if(k>maxi)
        {
            maxi=k;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
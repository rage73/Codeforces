#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/144/A

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
    
    int mini,maxi;
    int currMin=INT_MAX,currMax=INT_MIN;
    for(int i;i<n;i++)
    {
        int k;
        cin>>k;
        if(k<=currMin)
        {
            mini=i;
            currMin=k;
        }
        if(k>currMax)
        {
            maxi=i;
            currMax=k;
        }
    }

    int ans=maxi+(n-mini-1);
    if(mini<maxi)
    {
        cout<<ans-1;
    }
    else
    {
        cout<<ans;
    }
    return 0;
}
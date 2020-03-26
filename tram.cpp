#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/116/A

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
    int ans=0,count=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        count+=b-a;
        ans=max(ans,count);
    }
    cout<<ans<<endl;
    return 0;
}
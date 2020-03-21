#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/200/B

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

    int sum=0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        sum+=k;
    }
    float ans=(float)sum/n;
    cout<<fixed<<setprecision(4)<<ans;

    return 0;
}
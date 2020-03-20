#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/233/A

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
    if(!(n%2))
    {
        for(int i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
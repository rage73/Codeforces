#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/282/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ans=0;
    int n;
    cin>>n;
    while(n--)
    {
        string ex;
        cin>>ex;
        if(ex[0]=='+' or ex[2]=='+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
    cout<<ans;
    return 0;
}
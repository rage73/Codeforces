#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1328/problem/A

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
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        if(a%b)
        {
            cout<<(b-a%b)<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
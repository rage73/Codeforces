#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/228/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    set<int> hs;
    for(int i=0;i<4;i++)
    {
        int a;
        cin>>a;
        hs.insert(a);
    }
    cout<<4-hs.size();
    return 0;
}
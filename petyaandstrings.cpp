#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/112/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(), ::tolower);
    transform(b.begin(),b.end(),b.begin(), ::tolower);
    if(a.compare(b)==0)
    {
        cout<<"0";
    }
    else if(a.compare(b)<0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<"1";
    }
    
    return 0;
}
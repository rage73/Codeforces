#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1331/problem/D

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin>>str;
    cout<<(str[6]-'0')%2;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1/A

int main()
{
    double n,m,a;
    cin>>n>>m>>a;
    long long ans=ceil(n/a)*ceil(m/a);
    cout<<ans;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/266/problem/A

int removal(string s)
{
    int n=s.length();
    if(n==1)
    {
        return 0;
    }
    int ans=0;
    if(s[n-1]==s[n-2])
    {
        ans=1;
    }
    return ans+removal(s.substr(0,n-1));
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<removal(s);
    return 0;
}
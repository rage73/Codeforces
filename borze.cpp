#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/32/B

void decodeBorze(string s,string ans)
{
    if(s.empty())
    {
        cout<<ans;
        return;
    }
    int i;
    char a;
    if(s[0]=='.')
    {
        a='0';
        i=1;
    }
    else
    {
        i=2;
        if(s[1]=='.')
        {
            a='1';
        }
        else
        {
            a='2';
        }
    }
    ans=ans+a;
    decodeBorze(s.substr(i),ans);
}
int main()
{
    string s;
    cin>>s;
    decodeBorze(s,"");
    return 0;
}
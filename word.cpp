#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/59/A

string change(string s)
{
    int lwr=0,upr=0;
    for(int i=0;i<s.length();i++)
    {
        if(islower(s[i]))
        {
            lwr++;
        }
        else
        {
            upr++;
        }
    }
    if(upr>lwr)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    return s;
}
int main()
{
    string s;
    cin>>s;
    cout<<change(s);
    return 0;
}
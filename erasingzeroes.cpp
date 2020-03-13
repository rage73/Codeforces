#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1303/problem/A

typedef long long ll;

ll remZero(string s)
{
    if(s.length()<=2)
    {
        return 0;
    }
    int last1=-1,last0=-1;
    ll count=0,noof0=0;
    bool enc1=false;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            last1=i;
        }
        else if(s[i]=='0')
        {
            last0=i;
        }
        if(s[i]=='1' && enc1==false)
        {
            enc1=true;
        }
        if(s[i]=='0' && enc1==true)
        {
            noof0++;
        }
        if(s[i]=='1' && enc1==true)
        {
            count+=noof0;
            noof0=0;
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<remZero(s)<<endl;
    }
    return 0;
}
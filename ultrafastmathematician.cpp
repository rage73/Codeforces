#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/61/A

string xorContest(string a,string b)
{
    string ans="";
    for(int i=0;i<a.length();i++)
    {
        int n=a[i]-'0';
        int m=b[i]-'0';
        int k=n^m;
        ans=ans+to_string(k);
    }
    return ans;    
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<xorContest(a,b);
    return 0;
}
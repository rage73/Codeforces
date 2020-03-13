#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/71/A
 
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s.length()>10)
        {
            string ans=s.substr(0,1);
            int n=s.length();
            ans=ans+to_string(n-2)+s[n-1];
            cout<<ans<<endl;
        }
        else
        {
            cout<<s<<endl;
        }    
    }
    return 0;
}
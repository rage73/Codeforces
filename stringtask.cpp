#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/118/A
 
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    string ans="";
    for(char ch:str)
    {
        ch=tolower(ch);
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                break;
            default:
                ans=ans+"."+ch;
        }
    }
    cout<<ans;
    return 0;
}
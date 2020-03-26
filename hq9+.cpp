#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/133/A

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
    int i;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='H' or str[i]=='Q' or str[i]=='9')
        {
            break;
        }
    }
    if(i==str.length())
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }

    return 0;
}
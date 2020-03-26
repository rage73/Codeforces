#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/339/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int count[4]={};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i+=2)
    {
        int j=s[i]-'0';
        count[j]++;
    }
    bool st=false;
    for(int i=1;i<4;i++)
    {
        while(count[i]--)
        {
            if(st)
                cout<<'+'<<i;
            else
            {
                cout<<i;
                st=true;
            }
        }
    }
    return 0;
}
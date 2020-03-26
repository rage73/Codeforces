#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/236/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string un;
    cin>>un;
    set<char> borg;
    for(int i=0;i<un.size();i++)
    {
        borg.insert(un[i]);
    }
    if(borg.size()%2)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
    
    return 0;
}
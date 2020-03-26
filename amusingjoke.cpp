#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/141/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string gu,res,gures;
    cin>>gu>>res>>gures;
    unordered_map<char,int> cnt1,cnt2;
    int i;
    for(i=0;i<gu.size();i++)
    {
        cnt1[gu[i]]++;
    }
    for(i=0;i<res.size();i++)
    {
        cnt1[res[i]]++;
    }
    for(i=0;i<gures.size();i++)
    {
        cnt2[gures[i]]++;
    }
    for(i=0;i<26;i++)
    {
        char ch='A'+i;
        if(cnt1[ch]!=cnt2[ch])
        {
            break;
        }
    }
    cout<<(i==26?"YES":"NO");
    return 0;
}
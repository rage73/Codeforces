#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1330/problem/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int s,x;
        cin>>s>>x;
        set<int> a;
        for(int i=0;i<s;i++)
        {
            int t;
            cin>>t;
            a.insert(t);
        }
        int n=a.size();
        int find=1,ans=1;
        auto it=a.begin();
        while(it!=a.end() && x>0)
        {
            if(*it==find)
            {
                ans=find;
                find++;
                it++;
            }
            else if(*it>find)
            {
                x--;
                ans=find;
                find++;
            }
            else
            {
                it++;
            }
        }
        while(x>0)
        {
            ans++;
            x--;
        }
        while(it!=a.end() && *it==find)
        {
            ans=find;
            find++;
            it++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
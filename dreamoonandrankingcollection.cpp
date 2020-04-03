#include<bits/stdc++.h>
using namespace std;
// http://m3.codeforces.com/contest/1330/problem/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int find=1,ans=1,i=0;
        while(i<n && x>0)
        {
            if(a[i]==find)
            {
                ans=find;
                find++;
                i++;
            }
            else if(a[i]>find)
            {
                x--;
                ans=find;
                find++;
            }
            else
            {
                i++;
            }
        }
        while(x>0)
        {
            ans++;
            x--;
        }
        while(i<n && a[i]==find)
        {
            ans=find;
            find++;
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
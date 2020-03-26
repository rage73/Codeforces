#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/231/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,cnt=0,curr=0;
    cin>>n;
    for(int i=1;i<=n*3;i++)
    {
        int k;
        cin>>k;
        if(k)
            curr++;
        if(!(i%3))
        {
            if(curr>1)
            {
                cnt++;
            }
            curr=0;
        }
    }
    cout<<cnt;
    return 0;
}
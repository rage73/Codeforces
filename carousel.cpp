#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1328/problem/D

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
        int n;
        cin>>n;
        int a[n];
        set<int> cnt;
        unordered_map<int,int> st;
        int j=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cnt.insert(a[i]);
            if(!st.count(a[i]))
            {
                st[a[i]]=j++;
            }
        }
        cout<<cnt.size()<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<st[a[i]]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
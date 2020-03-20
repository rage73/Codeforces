#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1324/problem/D
 
typedef long long ll;

ll goodSubs(vector<int> a,int n)
{
    ll count=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            int j=lower_bound(a.begin(),a.end(),-a[i]+1)-a.begin();
            count+=(i-j);
        }   
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        a.push_back(j);
    }
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[i]=a[i]-k;
    }
    cout<<goodSubs(a,n);
    return 0;
}
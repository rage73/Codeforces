#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1325/problem/B

typedef long long ll;

int distinctElements(int a[],int n)
{
    unordered_map<int,bool> h;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int key=a[i];
        if(!h.count(key))
        {
            h[key]=true;
            count++;
        }
    }
    return count;
}
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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<distinctElements(a,n)<<endl;
    }
    return 0;
}
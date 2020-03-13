#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1324/problem/B
 
typedef long long ll;

bool ssPalindromeChecker(int a[],int n)
{
    if(n<3)
    {
        return false;
    }
    for(int i=0;i<n-2;i++)
    {
        int j=n-1;
        while(a[i]!=a[j])
        {
            j--;
        }
        if(j-i>1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<(ssPalindromeChecker(a,n)?"YES":"NO")<<endl;
    }
    return 0;
}
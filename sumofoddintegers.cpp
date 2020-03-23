#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1327/problem/0

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

bool oddRep(int n,int k)
{
    if(n%2 && k==1)
    {
        return true;
    }
    if(k>sqrt(n) or (n-k)%2)
    {
        return false;
    }
    if(n%2 and n>8)
    {
        return true;
    }   
    else if(!(n%2) and n>2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<(oddRep(n,k)?"YES":"NO")<<endl;
    }
    return 0;
}
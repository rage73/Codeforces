#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/148/A

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b)    (a*b)/gcd(a,b)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    
    if(k==1 or l==1 or m==1 or n==1)
    {
        cout<<d;
    }
    else
    {
        //****O(logn)****    
        //INCLUSION-EXCLUSION PRINCIPLE
        //har lcm wale pe brackets lgane pde idky
        
        int n1=d/k+d/l+d/m+d/n;
        int n2=d/(lcm(k,l)) + d/(lcm(k,m)) + d/(lcm(k,n)) + d/(lcm(l,m)) + d/(lcm(l,n)) + d/(lcm(m,n));
        int n3=d/(lcm(k,lcm(l,m))) + d/(lcm(k,lcm(l,n))) + d/(lcm(k,lcm(m,n))) + d/(lcm(l,lcm(m,n)));
        int n4=d/(lcm(lcm(k,l),lcm(m,n)));
        int ans=n1-n2+n3-n4;
        cout<<ans;

        //**********ALTERNATE O(N)***********
        // int count=0;
        // for(int i=1;i<=d;i++)
        // {
        //     if( !(i%k) or !(i%l) or !(i%m) or !(i%n))
        //     {
        //         count++;
        //     }
        // }
        // cout<<count;
    }
    return 0;
}
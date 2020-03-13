#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1296/problem/B

long maxCashback(long temp)
{
    if(temp<10)
    {
        return 0;
    }
    long sum=temp;
    while(temp!=0)
    {
        sum+=(long)(temp/10);
        temp/=10;
    }
    return (sum/10);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long s;
        cin>>s;
        cout<<s+maxCashback(s)<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/80/A

bool psieve[50];
void sieve(int n)
{
    memset(psieve,true,sizeof(psieve));
    psieve[0]=psieve[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(psieve[i])
        {
            for(int j=i;j*i<=50;j++)
            {
                psieve[j*i]=false;
            }
        }
    }
}
bool isNextPrime(int n,int m)
{
    sieve(m);
    if(!psieve[m])
    {
        return false;
    }
    for(int i=n+1;i<m;i++)
    {
        if(psieve[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<(isNextPrime(n,m)?"YES":"NO");
    return 0;
}
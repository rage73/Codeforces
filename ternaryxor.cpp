#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1328/problem/C

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
    while (t--)
    {
        int n;
        cin>>n;
        string x,a,b;
        cin>>x;
        a=b=x;
        a[0]=b[0]='1';
        bool chk=false;
        for(int i=1;i<n;i++)
        {
            if(x[i]=='2')
            {
                if(x[i-1]=='1' or chk)
                {
                    a[i]='2';
                    b[i]='0';
                    chk=true;
                }
                else
                {
                    a[i]=b[i]='1';
                    chk=false;
                }
            }
            else if(x[i]=='1')
            {
                if(chk)
                {
                    a[i]='1';
                    b[i]='0';
                }
                else
                {
                    a[i]='0';
                    b[i]='1';
                    chk=true;
                }
            }
            else
            {
                a[i]=b[i]='0';
            }
        }
        cout<<a<<endl<<b<<endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1332/problem/A

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
        int a,b,c,d;
        int x,y,x1,y1,x2,y2;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        int mx=x2-x1,my=y2-y1,cx=x-a+b,cy=y-c+d;

        if(mx==0 and my==0)
        {
            if(a>0 or b>0 or c>0 or d>0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else if(mx==0)
        {
            if(a>0 or b>0)
            {
                cout<<"NO"<<endl;
            }
            else if(cy>y2 or cy<y1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else if(my==0)
        {
            if(c>0 or d>0)
            {
                cout<<"NO"<<endl;
            }
            else if(cx>x2 or cx<x1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            if(cy>y2 or cy<y1)
            {
                cout<<"NO"<<endl;
            }
            else if(cx>x2 or cx<x1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
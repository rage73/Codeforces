#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1327/problem/B

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
        vector<int> cho;
        int choice[n][n+1];
        int coup[n+1]={};
        int ma[n+1]={};
        for(int i=0;i<n;i++)
        {
            // cin>>choice[i][0];
            int inp;
            cin>>inp;
            cho.pb(inp);
            bool single=true;
            // for(int j=1;j<=choice[i][0];j++)
            // {
            //     cin>>choice[i][j];
            //     if(coup[choice[i][j]]==0 and single)
            //     {
            //         coup[choice[i][j]]=i+1;
            //         ma[i+1]=1;
            //         single=false;
            //     }
            // }
            int lim=cho.back();
            for(int j=1;j<=lim;j++)
            {
                cin>>inp;
                cho.pb(inp);
                int chk=cho.back();
                if(coup[chk]==0 and single)
                {
                    coup[chk]=i+1;
                    ma[i+1]=1;
                    single=false;
                }
            }
        }

        int br,ki;
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(coup[i]==0)
            {
                count++;
                ki=i;
            }
            if(ma[i]==0)
            {
                br=i;
            }
        }

        if(!count)
        {
            cout<<"OPTIMAL"<<endl;
        }
        else
        {
            cout<<"IMPROVE"<<endl;
            cout<<br<<" "<<ki<<endl;
        }
        
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// http://m3.codeforces.com/contest/1330/problem/B

#define ll			long long
#define pb			push_back
#define setbits(x)	__builtin_popcountll(x)
#define MOD			1000000007

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],cnt[n]={},i,l=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            l=max(l,a[i]);
            cnt[a[i]]++;
            if(cnt[a[i]]>2)
            {
                cout<<"0"<<endl;
                break;
            }
        }
        if(i<n)
        {
            continue;
        }

        i=1;
        int lst=0;
        while(i<=l)
        {
            if(cnt[i]==0)
            {
                cout<<"0"<<endl;
                break;
            }
            else if(cnt[i]==2)
            {
                lst=i;
            }
            i++;
        }
        if(i<=l)
        {
            continue;
        }
        
        i=1;
        while(i<=lst)
        {
            if(cnt[i]!=2)
            {
                cout<<"0"<<endl;
                break;
            }
            i++;
        }
        if(i<=lst)
        {
            continue;
        }

        
        bool fnd[l+1]={},fnd1[l+1]={};

        i=0;
        while(i<lst)
        {
            fnd[a[i]]=true;
            i++;
        }
        i=1;
        while(i<=lst)
        {
            if(!fnd[i])
            {
                break;
            }
            i++;
        }

        int j=n-1;
        while(j>=n-lst)
        {
            fnd1[a[j]]=true;
            j--;
        }
        j=1; 
        while(j<=lst)
        {
            if(!fnd1[j])
            {
                break;
            }
            j++;
        }
        


        if(i>lst && j>lst && lst!=n-lst)
        {
            cout<<"2"<<endl<<lst<<" "<<n-lst<<endl<<n-lst<<" "<<lst<<endl;
        }
        else
        {
            if(i>lst)
            {
                cout<<"1"<<endl;
                cout<<lst<<" "<<n-lst<<endl;
            }
            else if(j>lst)
            {
                cout<<"1"<<endl;
                cout<<n-lst<<" "<<lst<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }        
    }
    return 0;
}
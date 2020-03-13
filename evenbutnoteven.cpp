#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1291/problem/A

typedef long long ll;

ll sumODigits(string a)
{
    ll ans=0;
    while(!a.empty())
    {
        int n=a[0]-'0';
        ans+=n;
        a=a.substr(1);
    }
    return ans;
}
bool isEbne(string ebne)
{
    int dig=ebne[ebne.length()-1]-'0';
    ll sum=sumODigits(ebne);
    if(dig%2!=0 && sum%2==0)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string ebne;
        cin>>ebne;
        check:
        if(isEbne(ebne))
        {
            cout<<ebne<<endl;
            continue;
        }
        int dig=ebne[ebne.length()-1]-'0';
        while(dig%2==0)
        {
            ebne=ebne.substr(0,ebne.length()-1);
            if(ebne.empty())
            {
                break;
            }
            dig=ebne[ebne.length()-1]-'0';
        }
        ll sum=sumODigits(ebne);
        if(sum%2!=0)
        {
            for(int i=0;i<ebne.length();i++)
            {
                int curr=ebne[i]-'0';
                if(curr%2!=0)
                {
                    if(i==0 && ebne[1]=='0')
                    {
                        continue;
                    }
                    ebne=ebne.substr(0,i)+ebne.substr(i+1);
                    break;
                }
            }    
        }  
        sum=sumODigits(ebne);
        if(ebne.empty() or sum%2!=0)
            cout<<-1<<endl;
        else
            goto check;
    }
    return 0;
}
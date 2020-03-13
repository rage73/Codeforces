#include <iostream>
using namespace std;
// https://codeforces.com/contest/1295/problem/A

typedef long long ll;
const ll L = 998244353;

string maxDisplay(int n)
{
	int display[]={0,2,5,5,4,5,6,3,7,6};
	int maxDis[]={0,-1,1,7,4,5,9,8};
	string ans="";
	if(n<4)
	{
		ans=to_string(maxDis[n]);
		return ans;
	}
    ans=to_string(1)+maxDisplay(n-2);
    return ans;
}
string displayCorrection(int n)
{
	int display[]={0,2,5,5,4,5,6,3,7,6};
	int maxDis[]={0,-1,1,7,4,5,9,8};
	string ans=maxDisplay(n);
	int i=0;
    int rem=0;
	while(ans.length()>L)
    {
        int dig=(ans[ans.length()-1])-'0';
        ans=ans.substr(0,ans.length()-1);
        rem+=display[dig];
    }
	while(i<ans.length() && rem>0)
    {
        int currDig=ans[i]-'0';
        if(currDig<9)
		{
			int diff=6-display[currDig];
			if(diff<=rem)
			{
				ans[i]=9;
				rem=rem-diff;
			}
			else
			{
						
			}
			
		}
		i++;
    }
	while(rem>0)
	{
		ans[--i]='8';
		rem--;
	}
	return ans;
}
int main() 
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<displayCorrection(n)<<endl;
	}
	return 0;
}
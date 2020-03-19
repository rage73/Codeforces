#include <iostream>
using namespace std;
// https://codeforces.com/contest/1295/problem/A

typedef long long ll;
const ll L = 998244353;

string maxDisplay(int n)
{
	int maxDis[]={0,-1,1,7,11,71,111,711};
	string ans="";
	if(n<8)
	{
		ans=to_string(maxDis[n]);
		return ans;
	}
    ans=maxDisplay(n-2)+to_string(1);
    return ans;
}

int main() 
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<maxDisplay(n)<<endl;
	}
	return 0;
}
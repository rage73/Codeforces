#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/110/A

bool isNearlyLucky(string a)
{
    int count=0,i=0;
    while(i<a.length())
    {
        if(a[i]=='4' or a[i]=='7')
        {
            count++;
        }
        i++;
    }
    if(count==4 or count==7)
    {
        return true;
    }
    return false;
}
int main()
{
    string a;
    cin>>a;
    cout<<(isNearlyLucky(a)?"YES":"NO");  
    return 0;
}
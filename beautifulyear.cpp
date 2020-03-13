#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/271/A
 
int distinctYear(int y)
{
    int temp,i,j;
    for(i=3;i>0;i--)
    {
        temp=y/(pow(10,i));
        int a=temp%10;
        for(j=i-1;j>=0;j--)
        {
            temp=y/(pow(10,j));
            if(a==temp%10)
            {
                break;
            }
        }
        if(j!=-1)
        {
            break;
        }
    }
    if(i==0)
    {
        return y;
    }
    int multi=pow(10,j);
    y=y-y%multi+multi;
    return distinctYear(y);
}

int main()
{
    int year;
    cin>>year;
    cout<<distinctYear(year+1);
    return 0;
}
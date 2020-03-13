#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/271/A
 
int distinctYear(int y)
{
    int temp,i;
    for(i=0;i<3;i++)
    {
        temp=y/(pow(10,i));
        int a=temp%10;
        int j;
        for(j=0;j<3-i;j++)
        {
            temp/=10;
            if(a==temp%10)
            {
                break;
            }
        }
        if(j!=3-i)
        {
            break;
        }
    }
    if(i==3)
    {
        return y;
    }
    y+=pow(10,i);
    return distinctYear(y);
}
int main()
{
    int year;
    cin>>year;
    cout<<distinctYear(year+1);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/263/A

int main()
{
    int mat[5][5];
    int si,sj;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j])
            {
                si=i;
                sj=j;
            }
        }
    }
    cout<<(abs(si-2)+abs(sj-2));
    return 0;
}
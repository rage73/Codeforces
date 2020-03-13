#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/69/A

int main()
{
    int n;
    cin>>n;
    int coor[n][3];
    int sx,sy,sz;
    sx=sy=sz=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>coor[i][j];
        }
        sx+=coor[i][0];
        sy+=coor[i][1];
        sz+=coor[i][2];
    }
    if(!sx && !sy && !sz)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;    
}
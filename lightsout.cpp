#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/275/A

void toggle(int grid[3][3],int x,int y)
{
    if(grid[x][y])
        grid[x][y]=0;
    else
        grid[x][y]=1;
    if(x-1>=0)
    {
        if(grid[x-1][y])
            grid[x-1][y]=0;
        else
            grid[x-1][y]=1;
    }
    if(y-1>=0)
    {
        if(grid[x][y-1])
            grid[x][y-1]=0;
        else
            grid[x][y-1]=1;
    }
    if(x+1<3)
    {
        if(grid[x+1][y])
            grid[x+1][y]=0;
        else
            grid[x+1][y]=1;
    }
    if(y+1<3)
    {
        if(grid[x][y+1])
            grid[x][y+1]=0;
        else
            grid[x][y+1]=1;
    }
}
int main()
{
    int grid[3][3];
    int button[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            grid[i][j]=1;
            cin>>button[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            while(button[i][j]--)
            {
                toggle(grid,i,j);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}
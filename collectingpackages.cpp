#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1294/problem/B

double dist(int x,int y)
{
    double dsx,dsy,sum,root;
    dsx=pow(x,2);
    dsy=pow(y,2);
    sum=dsx+dsy;
    root=sqrt(sum);
    return root;
}
void path(int coor[][2],int n,string &ans)
{
    if(n==0)
    {
        return;
    }
    double minDist=INT_MAX;
    int close;
    for(int i=0;i<n;i++)
    {
        double currDist=dist(coor[i][0],coor[i][1]);
        if(currDist<minDist)
        {
            close=i;
            minDist=currDist;
        }
    }
    for(int i=0;i<coor[close][0];i++)
    {
        ans=ans+"R";
    }
    for(int i=0;i<coor[close][1];i++)
    {
        ans=ans+"U";
    }
    int minx=coor[close][0],miny=coor[close][1];
    for(int i=0;i<n;i++)
    {
        if(coor[i][0]==0 && coor[i][1]==0)
        {
            continue;
        }
        coor[i][0]-=minx;
        coor[i][1]-=miny;
        //cout<<coor[i][0]<<" "<<coor[i][1]<<endl;
        if(coor[i][0]<0 or coor[i][1]<0)
        {
            ans="";
            return;
        }
    }
    swap(coor[close][0],coor[n-1][0]);
    swap(coor[close][1],coor[n-1][1]);
    //cout<<endl;
    path(coor,n-1,ans);
}
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int coor[n][2];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>coor[i][j];
            }
        }
        string ans="";
        path(coor,n,ans);
        if(ans=="")
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES"<<endl<<ans;
        }
        cout<<endl;        
    } 
    return 0;
}
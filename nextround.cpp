#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/158/A
 
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    vector<int> score;
    //score.clear();
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        score.push_back(temp);
    }
    int thold=score[k-1];
    int i=0;
    while(score[i]>=thold and score[i]>0 and i<n)
    {
        i++;
    }
    cout<<i;
    return 0;
}
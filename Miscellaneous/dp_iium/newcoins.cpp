#include<bits/stdc++.h>
#include<limits> 
using namespace std;
const int N=3e3+10,mod=1e9+7;
int n;
double dp[N][N],p[N];
double solve(int i,int h){
    if(i==n)return (h>n/2);
    double &ret=dp[i][h];
    if(ret==ret)return ret;
    ret = 0;
    ret += p[i]*solve(i+1,h+1);
    ret += (1-p[i])*solve(i+1,h);
    return ret;
}
int main()
{
    memset(dp,-1,sizeof dp);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    cout << solve(0,0) << endl;
    return 0;
}
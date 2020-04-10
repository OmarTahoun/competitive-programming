#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[1000001];
int dp[1003][1003][2];

bool solve(int i, int total, int take){
	if(i == n){
		if(total == 0 && take)
			return true;
		return false;
	}
	if(dp[i][total][take] != -1) return dp[i][total][take];

	dp[i][total][take] = solve(i+1, total, take) || solve(i+1, (total+arr[i])%m, 1);

	return dp[i][total][take];
}

int main(){
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	memset(dp, -1, sizeof dp);
	if(solve(0, 0, 0))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
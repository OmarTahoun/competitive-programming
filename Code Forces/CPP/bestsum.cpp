#include <bits/stdc++.h>
using namespace std;
int n, t;
int arr[51];
int dp[51][5000];

int solve(int i, int total){
	if(i == n)	return total;

	if(dp[i][total] != -1) return dp[i][total];

 	dp[i][total] = solve(i+1, total);
 	if(total+arr[i] <= t)
		dp[i][total] = max(dp[i][total], solve(i+1, total+arr[i]));

	return dp[i][total];
}

void tracesol(int i, int total){
	if(total > t) return;
	if(i == n) return;
	
	int leave = solve(i+1, total);
	int take = solve(i+1, total+arr[i]);

	int me = solve(i, total);

	if(me == take){
		cout<<arr[i]<<" ";
		tracesol(i+1, total+arr[i]);
	}

	else
		tracesol(i+1, total);

	return;
}

int main(){
	while(scanf("%d", &t) && t){
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);

		memset(dp, -1, sizeof dp);
		tracesol(0, 0);
		cout<<solve(0, 0)<<endl;
	}
	return 0;
}
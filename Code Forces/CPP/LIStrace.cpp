#include <bits/stdc++.h>
using namespace std;
int n, t;
vector<int> arr;
int dp[5000][5000];

int solve(int i, int len){
	if(i == n) return 0;
	if(dp[i][len] != -1) return dp[i][len];

	dp[i][len] = solve(i+1, len);

	if(arr[i+1] >= arr[i])
		dp[i][len] = max(dp[i][len], solve(i+1, len+1) + 1);

	return dp[i][len];
}

void tracesol(int i, int len){
	if(i == n) return;
	
	int leave = solve(i+1, len);
	int take = solve(i+1, len+1);

	int me = solve(i, len);

	if(me == leave)
		tracesol(i+1, len);
	else{
		tracesol(i+1, len+1);
		cout<<arr[i]<<" ";
	}

	return;
}

int main(){
	int tmp;
	while(scanf("%d", &tmp) != EOF)	 arr.push_back(tmp);
	memset(dp, -1, sizeof dp);
	n = int(arr.size());
	cout<<solve(0, 0)<<endl;
	tracesol(0,0);
	return 0;
}
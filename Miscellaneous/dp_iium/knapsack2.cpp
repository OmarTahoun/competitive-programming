#include <bits/stdc++.h>
using namespace std;
int n, C;
long long w[101];
int v[101];

long long dp[101][1000001];

long long solve(int i, int value){
	if(value <= 0) return 0;
	if(i == n) return 1000000000;
	if(dp[i][value] != -1) return dp[i][value];
	
	dp[i][value] = solve(i+1, value);
	dp[i][value] = min(dp[i][value], solve(i+1, value-v[i]) + w[i]);	
	return dp[i][value];
}

int main(){
	cin>>n>>C;
	long long v_sum = 0;
	for (int i = 0; i < n; ++i){
		cin>>w[i]>>v[i];
		v_sum += v[i];
	}

	memset(dp, -1, sizeof dp);
	for(int i = v_sum; i>=0; i--){
		if(solve(0, i) <= C){
			cout<<i<<endl;
			return 0;	
		}
	}
}
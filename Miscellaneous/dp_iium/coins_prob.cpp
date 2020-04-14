#include <bits/stdc++.h>
using namespace std;
int n;
double arr[3000];
double dp[3000][3000];

double solve(int i, int heads){
	if(i == n)
		return (heads>n/2);
	if(dp[i][heads] > -1) return dp[i][heads];

	dp[i][heads] = 0;
	dp[i][heads] += arr[i] * solve(i+1, heads+1);
	dp[i][heads] += (1-arr[i]) * solve(i+1, heads);

	return dp[i][heads];
}

int main(){
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	memset(dp, -1, sizeof dp);
	printf("%.10f\n", solve(0, 0));
	return 0;
}
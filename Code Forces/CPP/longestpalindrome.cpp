#include <bits/stdc++.h>
using namespace std;
int t, n;
int arr[2020];
int dp[2020][2020];
set<int> nums;

int solve(int i, int j){
	if(i>j){
		if(nums.size() > 2)
			return -1e9;
		return 0;
	} 

	if(i==j){
		nums.insert(arr[i]);
	 	return 1;
	}

	if(dp[i][j] != -1) return dp[i][j];

	if(arr[i] != arr[j])
		dp[i][j] = max(solve(i+1, j), solve(i, j-1));	
	else{
		nums.insert(arr[i]);
		dp[i][j] = solve(i+1, j-1) + 2;
	}

	return dp[i][j];
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];

		memset(dp, -1, sizeof dp);
		printf("%d\n",solve(0, n-1));
	}
	return 0;
}
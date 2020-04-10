#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1000005];
long long dp[100005][2];
map<int, long long> freq;

long long solve(int ind, int taken){
	if(ind == 100001)
		return 0;

	if(dp[ind][taken] != -1)
		return dp[ind][taken];
	
	dp[ind][taken] = solve(ind+1, 0);
	
	if(taken == 0)
		dp[ind][taken] = max(dp[ind][taken], solve(ind+1, 1)+freq[ind]);
	
	return dp[ind][taken];
}

int main(){
	cin>>n;
	for (int i = 0; i < n; ++i){
		int val;
		cin>>val;
		freq[val] += val;
	}
	memset(dp, -1, sizeof dp);
	cout<<solve(1, 0)<<endl;
	return 0;
}
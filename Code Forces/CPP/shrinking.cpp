#include <bits/stdc++.h>
using namespace std;
int n;
int arr[501];
pair<int, pair<int, int>> dp[501][501];

pair<int, pair<int, int>> solve(int i, int j){
	if(i == j) return {1, {arr[i], arr[j]}};
	if(dp[i][j].first != -1) return dp[i][j];

	dp[i][j].first = 500;
	for (int k = i; k < j; ++k){
		pair<int, pair<int, int>> left = solve(i, k);
		pair<int, pair<int, int>> right = solve(k+1, j);
		pair<int, pair<int, int>> all;
		all.first = left.first + right.first;
		all.second = {left.second.first, right.second.second};
		if(left.second.second == right.second.first){
			all.first--;
			if(left.first == 1)
				all.second.first++;
			if(right.first == 1)
				all.second.second++;
		}
		if(all.first < dp[i][j].first)
			dp[i][j] = all;
	}
	return dp[i][j];
}

int main(){
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	memset(dp, -1, sizeof dp);
	cout<<solve(0, n-1).first<<endl;
	return 0;
}
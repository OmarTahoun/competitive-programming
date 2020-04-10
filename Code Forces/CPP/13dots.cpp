#include <bits/stdc++.h>
using namespace std;
int t,m,n;
pair<int, int> items[101];
int dp[10001][101];


int solve(int idx, int left){
	if(idx == n) return 0;
	if(dp[idx][left] != -1) return dp[idx][left];

	dp[idx][left] = solve(idx+1, left);

	if(left >= items[idx].first)
		dp[idx][left] = max(dp[idx][left], solve(idx+1, left - items[idx].first) + items[idx].second);
	return dp[idx][left];
}

int main(){
	cin>>m>>n;
	int p, f;
	for (int i = 0; i < n; ++i)
		scanf("%d %d", &items[i].first, &items[i].second);


	memset(dp, -1, sizeof dp);
	if(m>2000)
		m+=200;
	cout<<solve(0, m)<<endl;


	return 0;
}
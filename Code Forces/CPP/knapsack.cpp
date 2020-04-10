#include <bits/stdc++.h>
using namespace std;
int T;
int n, m;
pair<int, int> items[1010];
int dp[1010][33];


int solve(int i, int left){
	if(i==n) return 0;
	if(dp[i][left] != -1) return dp[i][left];

	dp[i][left] = solve(i+1, left);

	if(left >= items[i].second){
		dp[i][left] = max(dp[i][left], solve(i+1, left-items[i].second) + items[i].first);
	}
	return dp[i][left];
}
int main(){
	scanf("%d", &T);
	while(T--){
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d %d", &items[i].first, &items[i].second);

		scanf("%d", &m);
		int ans = 0;
		int w;
		memset(dp, -1, sizeof dp);
		for (int i = 0; i < m; ++i){
			scanf("%d", &w);
			ans+=solve(0, w);
		}

	cout<<ans<<endl;
	}
	return 0;
}
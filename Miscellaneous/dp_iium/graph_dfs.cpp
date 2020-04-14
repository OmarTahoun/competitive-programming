#include <bits/stdc++.h>
using namespace std;
int n, e;

vector<int> graph[100005];
int vis[100005];
int dp[100005];

int solve(int node){
	if(node > n) return -1;
	if(dp[node] != -1) return dp[node];
	
	vis[node] = 1;
	if(graph[node].size() == 0) return 0;
	
	int best = 0;
	for (int i = 0; i < graph[node].size(); ++i)
		best = max(best, solve(graph[node][i]));
	
	dp[node] = max(best + 1, dp[node]);
	return dp[node];
}

int main(){
	cin>>n>>e;
	for (int i = 0; i < e; ++i){
		int a ,b;
		cin>>a>>b;
		graph[a].push_back(b);
	}

	memset(dp , -1, sizeof dp);
	int ans = 0;
	for(int i = 1; i<= n; ++i)
		if(!vis[i])
			ans = max(ans, solve(i));
	cout<<ans<<endl;
	return 0;
}
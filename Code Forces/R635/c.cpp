#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> graph[200005];
int dist[200005];
int dfs(int node, int prev, int d){
	for(int i = 0; i<graph[node].size(); i++)
		if(graph[node][i] != prev)
			dist[node] += dfs(graph[node][i], node, d+1);
	dist[node] -= d;
	return dist[node] + d + 1;
}

int main(){
	cin>>n>>k;
	for (int i = 0; i < n-1; ++i){
		int a, b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	dfs(1, 0, 0);
	

	sort(dist+1, dist + n+1);
	int ans = 0;
	for(int i = 0; i< n-k; i++)
		ans += dist[n-i];
	cout<<ans<<endl;
	return 0;
}
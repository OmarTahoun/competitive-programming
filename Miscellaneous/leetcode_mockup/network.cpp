#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<pair<int, int>> graph[101];
int vis[101];
int dist[101];

void dijkstra(int node){
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({0, node});
	
	dist[node] = 0;
	vis[node] = 1;
	
	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();

		for (int i = 0; i < graph[u].size(); ++i){
			vis[graph[u][i].first] = 1;
			if(dist[graph[u][i].first] > dist[u] + graph[u][i].second){
				dist[graph[u][i].first] = dist[u] + graph[u][i].second;
				pq.push({dist[graph[u][i].first], graph[u][i].first});
			}
		}
	}
}

int main(){
	cin>>n>>k;
	for (int i = 0; i < 3; ++i){
		int a, b, c;
		cin>>a>>b>>c;
		graph[a].push_back({b, c});
	}

	memset(vis, 0, sizeof vis);
	memset(dist, 0x3f3f3f3f, sizeof dist);
	dijkstra(k);
	for (int i = 1; i <= 4; ++i){
		if(!vis[i]){
			cout<<"-1"<<endl;
			return 0;
		}
	}

	int best = 0;
	for (int i = 1; i <= 4; ++i){
		best = max(best, dist[i]);
	}
	cout<<best<<endl;
	return 0;
}
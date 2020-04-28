#include <bits/stdc++.h>
using namespace std;

int start_x, start_y, end_x, end_y;
int n, row, a, b;

int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

map<pair<int, int>, bool> vis;
map<pair<int, int>, int> not_availble;
pair<pair<int, int>, int> cur;

int BFS(){
	queue<pair<pair<int, int>, int>> Q;
	Q.push({{start_x, start_y}, 0});
	vis[{start_x, start_y}] = 1;

	while(!Q.empty()){
		cur = Q.front();
		Q.pop();

		if(cur.first.first == end_x && cur.first.second == end_y)
			return cur.second;

		for(int i = 0; i < 8; i++){
			int next_x = cur.first.first + dx[i];
			int next_y = cur.first.second + dy[i];
			if(not_availble.count({next_x, next_y}) && !vis[{next_x, next_y}]){
				Q.push({{next_x, next_y}, cur.second+1});
				vis[{next_x, next_y}] = 1;
			}
		}
	}
	return -1;
}

int main(){
	cin>>start_x>>start_y>>end_x>>end_y;
	cin>>n;
	for(int i = 0; i < n; i ++){
		cin>>row>>a>>b;
		for(int j = a; j<=b; j++)
			not_availble[{row, j}] = 1;
	}

	cout<<BFS()<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n, m;
string grid[51];
int visited[51][51];
bool found = false;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y, int prevX, int prevY, char color){
	if(x < 0 || y < 0 || x >= n || y >= m) return;
	if(grid[x][y] != color) return;
	if(visited[x][y]){
		found = true;
		return;
	}

	visited[x][y] = true;
	for(int dir = 0; dir < 4; dir++){
		int nextX = x + dx[dir];
		int nextY = y + dy[dir];
		if(nextX == prevX && nextY == prevY) continue;
		dfs(nextX, nextY, x, y, color);
	}
}

int main(){
	cin>>n>>m;
	for(int  i = 0; i < n; i++)
		cin>>grid[i];

	memset(visited, 0 , sizeof visited);
	for(int  i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(!visited[i][j])
				dfs(i, j, -1, -1, grid[i][j]);			

	if(found)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
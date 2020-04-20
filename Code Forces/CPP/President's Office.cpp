#include <bits/stdc++.h>
using namespace std;

int n ,m;
vector<string> grid;
set<char> colors;
char p;
string row;
int main(){
	cin>>n>>m>>p;
	grid.push_back(string(m+2, '.'));
	for(int i = 0; i < n; i++){
		cin>>row;
		grid.push_back('.'+row+'.');
	}

	grid.push_back(string(m+2, '.'));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(grid[i][j] != p) continue;
			if(grid[i][j+1] != p && grid[i][j+1] != '.') colors.insert(grid[i][j+1]);
			if(grid[i+1][j] != p && grid[i+1][j] != '.') colors.insert(grid[i+1][j]);
			if(grid[i][j-1] != p && grid[i][j-1] != '.') colors.insert(grid[i][j-1]);
			if(grid[i-1][j] != p && grid[i-1][j] != '.') colors.insert(grid[i-1][j]);
		}
	}
	cout<<colors.size()<<endl;
	return 0;
}
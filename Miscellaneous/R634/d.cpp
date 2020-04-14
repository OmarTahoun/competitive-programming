#include <bits/stdc++.h>
using namespace std;

int T;
string grid[9];
int main(){
	scanf("%d", &T);
	while(T--){
		for (int i = 0; i < 9; ++i)
			cin>>grid[i];

		if(grid[0][0] != '3') grid[0][0] = '3';
		else grid[0][0] = grid[1][0];

		if(grid[1][4] != '3') grid[1][4] = '3';
		else grid[1][4] = grid[1][5];

		if(grid[2][8] != '3') grid[2][8] = '3';
		else grid[2][8] = grid[2][7];


		if(grid[4][1] != '3') grid[4][1] = '3';
		else grid[4][1] = grid[4][0];

		if(grid[5][5] != '3') grid[5][5] = '3';
		else grid[5][5] = grid[5][4];

		if(grid[3][6] != '3') grid[3][6] = '3';
		else grid[3][6] = grid[4][6];


		if(grid[8][2] != '3') grid[8][2] = '3';
		else grid[8][2] = grid[8][1];

		if(grid[6][3] != '3') grid[6][3] = '3';
		else grid[6][3] = grid[6][4];

		if(grid[7][7] != '3') grid[7][7] = '3';
		else grid[7][7] = grid[7][6];

		for (int i = 0; i < 9; ++i)
			cout<<grid[i]<<endl;
	}


	return 0;
}
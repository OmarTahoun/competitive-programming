#include <bits/stdc++.h>
using namespace std;
int N = 8;
int ans = 100;
bool safe(int grid[8][8], int row, int col){
	int i, j; 
    for (i = 0; i < col; i++) 
        if (grid[row][i]) 
            return false; 

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (grid[i][j]) 
            return false; 
  
    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (grid[i][j]) 
            return false; 
  
    return true; 
}

bool solve(int grid[8][8], int curCol, int base[]){
	if(curCol >= N){
		int newBoard[] = {0, 0, 0, 0, 0, 0, 0, 0};
		for(int j = 0; j < N; ++j)
			for(int i = 0; i < N; ++i)
				if(grid[i][j])
					newBoard[j] = i+1;

		int tmp = 0;
		for(int i = 0; i < N; ++i)
			if(base[i] != newBoard[i])
				tmp+=1;
		ans = min(ans, tmp);
		return true;
	}


	for(int i = 0; i < N; ++i)
		if(safe(grid, i, curCol)){
			grid[i][curCol] = 1;
			solve(grid, curCol+1, base);
			grid[i][curCol] = 0;
		}
	return false;
}
int grid[8][8];
int main(){
	int base[8];
	int t = 1;
	while(scanf("%d", &base[0]) != EOF){
		for (int i = 1; i < 8; ++i)
			cin>>base[i];
		solve(grid, 0, base);
		printf("Case %d: ", t++);
		printf("%d\n", ans);
		ans = 100;
	}
	return 0;
}
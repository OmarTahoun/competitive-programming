#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int mat[10][10];
	int largest = -1;
	cin>>n;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			if(i == 0 || j ==0)
				mat[i][j] = 1;
			else
				mat[i][j] = mat[i-1][j] + mat[i][j-1];
			if(mat[i][j] >= largest)
				largest = mat[i][j];

		}
	}

	cout<<largest<<endl;
	return 0;
}
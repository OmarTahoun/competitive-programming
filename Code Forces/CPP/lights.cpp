#include <bits/stdc++.h>
using namespace std;

int lights[5][5];
int main(){
	int x;
	for (int i = 1; i <=3; ++i){
		for (int j = 1; j <=3; ++j){
			cin>>x;
			lights[i][j] += x;
			lights[i+1][j] += x;
			lights[i][j+1] += x;
			lights[i-1][j] += x;
			lights[i][j-1] += x;
		}
	}

	for (int i = 1; i <=3; ++i){
		for (int j = 1; j <=3; ++j){
			if(lights[i][j] % 2 == 0)
				cout<<1;
			else
				cout<<0;
		}
		cout<<endl;
	}


	return 0;
}
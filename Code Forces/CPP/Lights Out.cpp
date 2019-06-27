#include <bits/stdc++.h>
using namespace std;

int lights[5][5];
int main(){
	int val;
	for (int i = 1; i < 4; ++i)
		for (int j = 1; j < 4; ++j){
			cin>>val;
			lights[i][j] += val;
			lights[i+1][j] += val;
			lights[i-1][j] += val;
			lights[i][j+1] += val;
			lights[i][j-1] += val;
		}

	for (int i = 1; i < 4; ++i){
		for (int j = 1; j < 4; ++j){
			if(lights[i][j]%2==0)
				cout<<1;
			else
				cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
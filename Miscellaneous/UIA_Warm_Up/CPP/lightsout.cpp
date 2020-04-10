#include <iostream>
using namespace std;
int main(){
	int clicks[5][5] = {0}, val;
	for (int i = 1; i < 4; ++i){
		for (int j = 1; j < 4; ++j){
			cin>>val;
			clicks[i][j] += val;
			clicks[i+1][j] += val;
			clicks[i][j+1] += val;
			clicks[i-1][j] += val;
			clicks[i][j-1] += val;
		}
	}

	for (int i = 1; i < 4; ++i){
		for (int j = 1; j < 4; ++j){
			if (clicks[i][j] % 2 == 0)
				cout<<1;
			else
				cout<<0;
		}
		cout<<"\n";
	}
	return 0;
}
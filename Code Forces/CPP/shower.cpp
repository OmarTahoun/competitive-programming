#include <bits/stdc++.h>

using namespace std;

int happiness[5][5];
long long res = -1;
int main(){
	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			cin>>happiness[i][j];
		}
	}
	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			long long curr = happiness[0][1] + happiness[1][0] + happiness[0][1] 
		}
	}



	return 0;
}
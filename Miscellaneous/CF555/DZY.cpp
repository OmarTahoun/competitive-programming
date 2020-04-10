#include <bits/stdc++.h>
using namespace std;

string str[101];
int main(){
	int n ,m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; ++i){
		cin >> str[i];
		for (int j = 0; j < m; ++j){
			if (str[i][j] == '.'){
				if ((i+j) % 2 == 0)
					str[i][j] = 'W';
				else
					str[i][j] = 'B';				
			}
		}
	}

	for (int i = 0; i < n; ++i){
		cout<<str[i]<<endl;
	}
	return 0;
}
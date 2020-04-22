#include <bits/stdc++.h>
using namespace std;

int m, n;
int b[101][101];
int a[101][101];
int x[101][101];
int main(){
	cin>>m>>n;
	
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			cin>>b[i][j];
	
	for(int i = 0; i < 101; i++)
		for(int j = 0; j < 101; j++)
			a[i][j] = 1;


	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(b[i][j] == 0){
				for(int k = 0; k < n; k++)
					a[i][k] = 0;
				for(int k = 0; k < m; k++)
					a[k][j] = 0;
			}
		}
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			x[i][j] = 0;
			for(int k = 0; k < n; k++)
				x[i][j] |= a[i][k];
			for(int k = 0; k < m; k++)
				x[i][j] |= a[k][j];

			if(x[i][j] != b[i][j]){
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}

	cout<<"YES"<<endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
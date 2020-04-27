#include <bits/stdc++.h>
using namespace std;

int n, m, k, u, v, h, pos = 1;
int arr[1000005];

int main(){
	cin>>n>>m>>k;
	for(int i = 0; i < m; i ++){
		cin>>h;
		arr[h] = 1;
	}

	for(int  i = 0; i < k; i++){
		cin>>u>>v;
		if(pos == u && !arr[pos]) pos = v;
		else if(pos == v && !arr[pos]) pos = u;
	}

	cout<<pos<<endl;
	return 0;
}
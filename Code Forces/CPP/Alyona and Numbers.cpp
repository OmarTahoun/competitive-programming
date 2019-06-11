#include <bits/stdc++.h>
using namespace std;

int main(){
	// THIS is a TLE solution and i know it :|
	int n, m;
	cin>>n>>m;
	int count = 0;
	for (int i = 1; i <=n; ++i)
		for (int j = 1; j <=m; ++j){
			if ((i+j) % 5 == 0)
				++count;
		}

	cout<<count<<endl;
	return 0;
}
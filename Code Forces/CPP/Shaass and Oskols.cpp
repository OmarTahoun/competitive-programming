#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int lines[101];
	for (int i = 0; i < n; ++i)
		cin>>lines[i];

	int m;
	cin>>m;
	for (int i = 0; i < m; ++i){
		int x, y;
		cin>>x>>y;
		int left = abs(1-y);
		int right = abs(y-lines[x-1]);
		if (x>1)
			lines[x-2] += left;
		if (x<n)
			lines[x] += right;
		lines[x-1] = 0;
	}

	for (int i = 0; i < n; ++i)
		cout<<lines[i]<<endl;
	return 0;
}
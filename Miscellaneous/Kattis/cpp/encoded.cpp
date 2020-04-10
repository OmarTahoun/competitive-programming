#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string res = "";
		string line;
		cin>>line;

		int n = (int)line.size();
		int x = sqrt(n);
		string grid[x];
		int j = 0;

		for (int i = 0; i < n; i+=x){
			string sub = line.substr(i, x);
			reverse(sub.begin(), sub.end());
			grid[j]	 = sub;
			j++;
		}

		for (int i = 0; i < x; ++i)
			for (int j = 0; j < x; ++j)
				res += grid[j][i];
		cout<<res<<endl;
	}
	return 0;
}
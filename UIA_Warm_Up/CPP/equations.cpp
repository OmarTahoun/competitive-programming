#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, m, count=0;
	long long a, b;
	cin>>n>>m;

	for (int i = 0; i <=n; ++i)
		for (int j = 0; j <=m; ++j){
			a = pow(i, 2) + j;
			b = i + pow(j,2);
			if (a==n && b==m)
				count+=1;
		}
	cout<<count<<endl;
	return 0;
}
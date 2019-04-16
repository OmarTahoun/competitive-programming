#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, m, max = 0, min = 0;
	int a[1001];
	int b[1001];
	cin>>n>>m;
	for (int i = 0; i < m; ++i){
		cin>>a[i];
		b[i] = a[i];
	}

	for (int i = 0; i < n; ++i){
		sort(a, a+m, greater<int>());
		max = max+a[0];
		a[0]-=1;
	}

	for (int i = 0; i < n; ++i){
		sort(b, b+m);
		min = min+b[0];
		b[0]-=1;
		if (b[0] == 0)
			b[0] = 10001;
	}

	cout<<max<<" "<<min<<endl;
	return 0;
}
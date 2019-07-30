#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count=0;
	long long x;
	cin>>n>>x;
	for (int i = 1; i <=n; ++i)
		if (x%i == 0 && x/i <=n)
			++count;

	cout<<count<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, total = 0, min = 101;
	int a, p;
	cin>>n;

	for (int i = 0; i < n; ++i){
		cin>>a>>p;
		if(p<=min)
			min = p;
		total += a*min;
	}

	cout<<total<<endl;
	return 0;
}
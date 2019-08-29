#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, l;
	double a[1001];
	cin>>n>>l;
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	sort(a, a+n);
	double maxDist = 0;
	for (int i = 0; i < n-1; ++i){
		if(abs(a[i]-a[i+1]) >= maxDist)
			maxDist = abs(a[i]-a[i+1]);
	}
	printf("%.12f\n", max(maxDist/2, max(a[0]-0 , l-a[n-1])));
	return 0;
}
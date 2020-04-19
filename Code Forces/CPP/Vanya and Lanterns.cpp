#include <bits/stdc++.h>
using namespace std;

int main(){
	double a[1010];
	int n, l;
	cin>>n>>l;
	for(int i = 0; i < n; ++i)
		cin>>a[i];

	sort(a, a+n);
	double dist_max = 0;
	for(int i = 0; i < n-1; ++i)
		dist_max = max(dist_max, a[i+1]-a[i]);

	dist_max /= 2.00;
	dist_max = max(dist_max, a[0]-0);
	dist_max = max(dist_max, l-a[n-1]);
	printf("%.10f\n", dist_max);
	return 0;
}
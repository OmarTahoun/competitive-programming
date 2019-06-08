#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	int prevx, prevy, x, y;
	double dist=0;
	cin>>n>>k;
	cin>>prevx>>prevy;
	for (int i = 1; i < n; ++i){
		cin>>x>>y;
		int x_dist = pow(prevx-x,2);
		int y_dist = pow(prevy-y,2);
		dist+= sqrt(x_dist+y_dist);
		prevx = x;prevy = y;
	}
	double factor = k/50.0;
	printf("%.8f\n", dist*factor);

	return 0;
}


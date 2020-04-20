#include <bits/stdc++.h>
using namespace std;

int n, m, x, y;
map<int, int> places;
int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &x);
		places[x] = i;
	}

	scanf("%d", &m);
	long long a=0, b=0;
	for(int i = 0; i < m; i++){
		scanf("%d", &y);
		a += places[y];
		b += (n - places[y])+1;
	}

	printf("%lld %lld\n", a, b);
	return 0;
}
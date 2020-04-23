#include <bits/stdc++.h>
using namespace std;

int n;
int x, y;
map<int, int> sum;
map<int, int> dif;

int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		sum[x+y]++;
		dif[x-y]++;
	}

	long long ans = 0;
	
	for(auto const& it : sum)
		ans += (it.second * (it.second - 1) / 2);

	for(auto const& it : dif)
		ans += (it.second * (it.second - 1) / 2);

	printf("%lld\n", ans);
	return 0;
}
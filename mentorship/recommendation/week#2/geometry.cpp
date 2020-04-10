#include <bits/stdc++.h>
using namespace std;

int n, k;
map<long long, long long> bef, aft;
long long ans = 0, x;

int main(){
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; ++i){
		scanf("%lld", &x);
		if(x % k == 0){
			ans += bef[x/k];
			bef[x] += aft[x/k];
		}

		aft[x]++;
	}
	cout<<ans<<endl;
	return 0;
}
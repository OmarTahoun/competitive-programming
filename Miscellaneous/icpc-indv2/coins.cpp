#include <iostream>
#include <map>
using namespace std;

long long val;
int main(){
	freopen("buy.in", "r", stdin);
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i){
		int n;
		scanf("%d", &n);

		map<long long, long long> coins;
		long long max = -100000000000001;

		for (int i = 0; i < n; ++i){
			scanf("%lld", &val);
			coins[val] += 1;
		}

		map<long long, long long>::iterator it;

		for ( it = coins.begin(); it != coins.end(); it++ ){
			if ((it->first * it->second)>=max)
				max = (it->first * it->second);
		}
		printf("%lld\n", max);
	}

	return 0;
}
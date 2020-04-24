#include <bits/stdc++.h>
using namespace std;

int n;
long long d;
vector<pair<long long, long long>> friends;
long long money[100005], factor[100005];

int main(){
	scanf("%d %lld", &n, &d);
	for(int i = 0; i < n; i++){
		long long m, s;
		scanf("%lld %lld", &m, &s);
		friends.push_back({m, s});
	}

	sort(friends.begin(), friends.end());

	for(int  i = 0; i < n; i++){
		money[i] = friends[i].first;
		factor[i] = friends[i].second;
	}

	for(int i = 1; i < n; i++)
		factor[i] += factor[i-1];

	int id;
	long long ans = 0;
	for(int i = 0; i < n; i++){
		id = lower_bound(money, money+n, money[i] + d) - money;
		ans = max(ans, factor[id-1] - factor[i-1]);
	}
	cout<<ans<<endl;
	return 0;
}
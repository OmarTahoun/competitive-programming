#include <bits/stdc++.h>
using namespace std;

int n, f;
long long k[100005], l[100005];
vector<pair<long long, int>> benefits;
long long ans = 0;
int main(){
	cin>>n>>f;
	for(int i = 0; i < n; i++){
		cin>>k[i]>>l[i];
		benefits.push_back({min(2 * k[i], l[i]) - min(k[i], l[i]), i});
	}

	sort(benefits.begin(), benefits.end(), greater<>());
	for(int i = 0; i < f; i++){
		int idx = benefits[i].second;
		ans += min(2 * k[idx], l[idx]);
	}

	for(int i = f; i < n; i++){
		int idx = benefits[i].second;
		ans += min(k[idx], l[idx]);
	}
	cout<<ans<<endl;
	return 0;
}
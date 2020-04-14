#include <bits/stdc++.h>
using namespace std;
int t, n;
vector<pair<int, pair<int, int>>> monsters;

bool comp(const pair<int, pair<int, int>>& lhs, const pair<int, pair<int, int>>& rhs){
  if(lhs.second.first < rhs.second.first || lhs.second.first > rhs.second.first)
  	return lhs.second.first < rhs.second.first;
  return lhs.second.second > rhs.second.second;
}

void explode(int i, int hit){
	if(i > n)
		i = 1;

	if(monsters[])
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 1; i <= n; ++i){
			int a, b;
			cin>>a>>b;
			monsters.push_back({i, {a, b}});
		}

		sort(monsters.begin(), monsters.end(), comp);

		int bullets = 0;
		for (int i = 0; i < n; ++i){
			if(monsters[i].second.first > 0){
				bullets += monsters[i].second.first;
				explode(monsters[i].first + 1, monsters[i].second.second);
			}
		}
	}



	return 0;
}
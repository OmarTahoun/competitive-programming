#include <bits/stdc++.h>
using namespace std;

int n , m, x, q;
map<char, pair<int, int>> keys;
vector<pair<int, int>> shifts;

double calc_dist(pair<int, int> a, pair<int, int> b){
	double x = a.first - b.first;
	double y = a.second - b.second;

	double dist = x*x + y*y;
	dist = sqrt(dist);
	return dist;
}

int main(){
	cin>>n>>m>>x;
	for(int i = 0; i < n; i++){
		string row;
		cin>>row;
		for(int j = 0; j < m; j++){
			if(row[j] == 'S')
				shifts.push_back({i, j});
			else
				keys[row[j]] = {i, j};
		}
	}

	string line;
	cin>>q;
	cin>>line;

	bool fail = false;
	int count = 0;
	for(int i = 0; i < q; i++){
		if(isupper(line[i]) && keys.find(tolower(line[i])) != keys.end()){
			if(shifts.size() > 0){
				double dist = 1e7;
				for(auto x : shifts){
					double new_dist = calc_dist(x, keys[tolower(line[i])]);
					dist = min(dist, new_dist);
				}
				if(dist > x)
					count ++;
			}
			else
				fail = true;
		}
		else if(keys.find(line[i]) == keys.end())
			fail = true;
	}

	if(fail)
		cout<<-1<<endl;
	else
		cout<<count<<endl;
	return 0;
}
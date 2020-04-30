#include <bits/stdc++.h>
using namespace std;

int n , m, x, q;
string line;
vector<pair<int, int>> keys[26];
vector<pair<int, int>> shifts;
bool letters[26];

int calc_dist(pair<int, int> a, pair<int, int> b){
	double x = a.first - b.first;
	double y = a.second - b.second;

	double dist = x*x + y*y;
	return dist;
}

bool ok(pair<int, int> a){
	for(auto s : shifts){
		int dist = calc_dist(s, a);
		if(dist <= x*x) 
			return true;
	}
	return false;
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
				keys[row[j]-'a'].push_back({i, j});
		}
	}

	for(int i = 0; i < 26; i++){
		for(auto pos : keys[i]){
			if(letters[i]) 
				break;
			letters[i] = ok(pos);
		}
	}
	

	cin>>q;
	cin>>line;
	int count = 0;
	for(int i = 0; i < q; i++){
		if(islower(line[i])){
			if(keys[line[i] - 'a'].empty()){
				count = -1;
				break;
			}
		}else{
			line[i] = tolower(line[i]);
			if(shifts.empty() || keys[tolower(line[i]) - 'a'].empty()){
				count = -1;
				break;
			}
			if(!letters[line[i] - 'a'])
				count++;
		}
	}

	cout<<count<<endl;
	return 0;
}
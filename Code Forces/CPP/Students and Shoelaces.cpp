#include <bits/stdc++.h>
using namespace std;

int n, m;
pair<int, vector<int>> students[1001];
int main(){
	cin>>n>>m;
	for(int i = 0; i < m; i++){
		int a, b;
		cin>>a>>b;
		students[a].second.push_back(b);
		students[a].first++;

		students[b].second.push_back(a);
		students[b].first++;
	}

	set<int>remove;
	int groups = 0;
	while(true){
		int out = 0;
		if(out == n) break;
		for(int i = 1; i <= n; i++){
			if(students[i].first < 0) out++;
			if(students[i].first == 1)
				remove.insert(i);
		}
		
		if(remove.empty()) break;

		for(auto student : remove){
			students[student].first = -1;
			for(auto x : students[student].second)
				students[x].first--;
		}
		groups++;
		remove.clear();
	}
	cout<<groups<<endl;
	return 0;
}
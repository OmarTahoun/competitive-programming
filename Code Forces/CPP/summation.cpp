#include <bits/stdc++.h>
using namespace std;
int arr[100];
vector<int> cur;
vector<vector<int>> sol;
int currAns;
int ans;
int n;

bool comp(vector<int> &v1, vector<int> &v2){
	// if(v1.size() != v2.size())
	// 	return v1.size() < v2.size();
	for(int i = 0; i<min(v1.size(), v2.size()); ++i){
		if(v1[i] != v2[i])
			return v1[i]>v2[i];
	}
	return v1<v2;
}
void solve(int currAns, int i){
	if(i==n || currAns > ans){
		if(currAns == ans){
			sol.push_back(cur);
		}
		return;
	}
	cur.push_back(arr[i]);
	solve(currAns+arr[i], i+1);

	cur.pop_back();
	solve(currAns, i+1);
}
int main(){
	while(scanf("%d %d", &ans, &n) != EOF && ans>0 &&n>0){
		cur.clear();
		sol.clear();
		memset(arr, -1, sizeof arr);
		for (int i = 0; i < n; ++i)
			cin>>arr[i];

		sort(arr, arr+n, greater<int>());
		cout<<"Sums of " << ans<<":"<<endl;
		solve(0, 0);
		if(sol.size() == 0){
			cout<<"NONE"<<endl;
			continue;
		}
		sort(sol.begin(),sol.end(), comp);
		sol.resize(unique(sol.begin(), sol.end())-sol.begin());
		for(int i = 0; i<sol.size(); ++i)
			for(int j = 0; j<sol[i].size(); ++j)
				printf("%d%c", sol[i][j], "+\n"[j==sol[i].size()-1]);
	}

	return 0;
}
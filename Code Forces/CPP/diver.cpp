#include <bits/stdc++.h>
using namespace std;
int t, w;
int n;
int dp[33][1010];
int taken[33][1010];
int treasure[33];
int depth[33];
int cost[33];

int solve(int i, int left){
	if(left < 0) return 0;
	if(i == n) return 0;

	if(dp[i][left] != -1) return dp[i][left];
	int take=0, notake=0;
	

	if(left-cost[i] >= 0)
		take = solve(i+1, left-cost[i]) + treasure[i];

	notake = solve(i+1, left);
	if(take > notake){
			taken[i][left] = true;
	}

	int ans = max(take, notake);
	return dp[i][left] = ans;
}

int main(){
	bool first = true;
	while(cin >> t >> w){
		if(first) 
			first = false;
		else 
			cout<<endl;

		memset(dp,-1,sizeof(dp));
		memset(treasure,0,sizeof(treasure));
		memset(depth,0,sizeof(depth));
		memset(cost,0,sizeof(cost));
		memset(taken,false,sizeof(taken));

		cin>>n;
		for (int i = 0; i < n; ++i){
			cin >> depth[i] >> treasure[i];
			cost[i] = depth[i] * 3 * w;
		}


		cout<<solve(0, t)<<endl;
		
		vector<int> takenItems;
		int time = t;
		for (int i = 0; i < n; ++i)
			if(taken[i][time] == true){
				takenItems.push_back(i);
				time -= cost[i];
			}

		cout<<takenItems.size()<<endl;
		for (int i = 0; i < (int)takenItems.size(); ++i)
			cout<< depth[takenItems[i]] << " " 
				<< treasure[takenItems[i]] <<endl;
	}
	return 0;
}
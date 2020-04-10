#include <bits/stdc++.h>
using namespace std;
int t;
int n, m;
int arr[10010];
int dp[10010][110];

int solve(int i, int total){
	total = ((total%m) + m) % m;
	if(i==n){
		if(total == 0)
			return 1;
		return 0;
	}

	if(dp[i][total] != -1) return dp[i][total];
	dp[i][total] = (solve(i + 1, (total + arr[i])) 
					|| solve(i + 1, (total - arr[i])));

	return dp[i][total];
}



int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);

		memset(dp, -1, sizeof dp);
		cout << (solve(0, 0) ? "Divisible" : "Not divisible") << endl;

	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int d, m;
int n,q;
long long arr[201];
long long dp[201][20][11];

long long solve(long long total, long long i, long long left){
	if(left == m){
		if(total == 0)
			return 1;
		return 0;
	}
	if(i>=n) return 0;

	if(dp[i][total][left] != -1) return dp[i][total][left];

	long long temp = total+arr[i];
	temp %= d;
	if(temp<0) temp+= d;
	
	dp[i][total][left] = solve(temp, i+1, left+1) + solve(total, i+1, left);
	return dp[i][total][left];
}

int main(){
	int s = 0;
	while(cin>>n>>q && (n && q)){
		s++;
		cout<<"SET "<<s<<":\n";
		for (int i = 0; i < n; ++i)	cin>>arr[i];

		int query = 1;
		for (int i = 0; i < q; ++i){
			cin>>d>>m;
			memset(dp, -1, sizeof dp);
			cout<<"QUERY "<<query<<": ";
			cout<<solve(0, 0, 0)<<endl;
			query++;
		}
	}
	return 0;
}
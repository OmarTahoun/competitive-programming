#include <bits/stdc++.h>
using namespace std;
long long dp[5][30001];
long long n;
int coins[5] = {1,5,10,25,50};

long long solve(long long z, long long i){
	if(i == 5 && z > 0) return 0;
	if(z < 0) return 0;
	if(z == 0) return 1;

	if(dp[i][z] != -1) return dp[i][z];
	dp[i][z] = solve(z, i+1);
	if(z-coins[i]>=0)
		dp[i][z] += solve(z-coins[i], i);
	return dp[i][z];
}


int main(){
	memset(dp, -1, sizeof dp);
	while(scanf("%lld", &n) != EOF){
		long long res = solve(n, 0);
		if(res == 1)
			cout<<"There is only 1 way to produce "<<n<<" cents change.\n";
		else
			cout<<"There are "<<res<<" ways to produce "<<n<<" cents change.\n";
		}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int arr[];
long long best = -1;

int solve(int i, int length){
	if(i==6) return 0;
	if(best != -1) return best;

	dp[i][length] = solve(i+1, length);

	if(arr[i+1] <= arr[i])
		dp[i][length] = max(dp[i][length], solve(i+1, length+1)+1);

	return dp[i][length];
}

int main(){
	best = -1
	cout<<solve(0, 0)<<endl;
	return 0;
}

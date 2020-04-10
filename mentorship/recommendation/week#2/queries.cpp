#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	if(n<10) return n;

	int r = 1;
	while(n != 0){
		if(n%10 != 0) r*= n%10;
		n/=10;
	}
	solve(r);
}

int nums[1000005];
int ans[10][1000005];
int main(){
	int n, l, r, k;
	for (int i = 1; i <= 1000000; ++i){
		nums[i] = solve(i);
	}

	for (int i = 1; i < 10; ++i){
		for (int j = 1; j <= 1000000; ++j){
			if(nums[j] == i)
				ans[i][j] = 1;
		}
	}

	for (int i = 1; i < 10; ++i)
		for (int j = 2; j <= 1000000; ++j)
			ans[i][j] += ans[i][j-1];

	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%d %d %d", &l, &r, &k);
		cout<<ans[k][r] - ans[k][l-1]<<endl;
	}
	return 0;
}
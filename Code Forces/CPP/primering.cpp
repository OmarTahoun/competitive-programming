#include <bits/stdc++.h>
using namespace std;
int primes[] = {2,3,5,7,11,13,17,19,23,29,31};
int res[17] = {1};
int n, t=0;

bool prime(int val){
	for(int x:primes)
		if(x == val) return true;
	return false;
}
void solve(int curr, bool taken[]){
	if(curr == n){
		if(!prime(res[n-1]+1)) return;
		printf("1");
		for (int i = 1; i < n; ++i)
			printf(" %d", res[i]);
		printf("\n");
		return;
	}

	for (int i = 2; i <= n; ++i){
		if(taken[i]) continue;
		if(prime(i+res[curr-1])){
			taken[i] = 1;
			res[curr] = i;

			solve(curr+1, taken);
			taken[i] = 0;
		}
	}
}

int main(){
	while(scanf("%d", &n) != EOF){
		if(t++) putchar('\n');
		printf("Case %d:\n", t);
		bool taken[17] = {0};
		solve(1, taken);
	}
	return 0;
}
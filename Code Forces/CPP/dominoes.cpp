#include <bits/stdc++.h>
using namespace std;
int n, m;
int firstBegin,firstEnd,lastBegin,lastEnd;
int begins[20], Ends[20];
bool picked[20];
bool found = false;

void solve(int i, int cur){
	if(i == n){
		if(cur == lastBegin)
			found = true;
		return;
	}


	for (int j = 0; j < m; ++j){
		if(picked[j]) continue;
		if(begins[j] == cur){
			picked[j] = true;
			solve(i+1, Ends[j]);
			picked[j] = false;
		}
		if(Ends[j] == cur){
			picked[j] = true;
			solve(i+1, begins[j]);
			picked[j] = false;
		}
	}
}

int main(){
	while(scanf("%d %d", &n, &m) && n != 0){
		scanf("%d %d", &firstBegin, &firstEnd);
		scanf("%d %d", &lastBegin, &lastEnd);

		for (int i = 0; i < m; ++i){
			scanf("%d %d", &begins[i], &Ends[i]);
			picked[i] = false;
		}

		found = false;
		solve(0, firstEnd);
		if(found)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
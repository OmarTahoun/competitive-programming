#include <bits/stdc++.h>
using namespace std;
int curr, best;
int arr[13];
int recent;
void solve(int plus, int minus, int mth){
	if(mth > 12){
		if(curr>best)
			best = curr;
		return;
	}

	curr += plus;
	arr[mth] = plus;

	recent = arr[mth] + arr[mth-1] + arr[mth-2] + arr[mth-3] + arr[mth-4];
	cout<<recent<<" "<<mth<<endl; 
	if(mth>6 && recent>0){
		curr -= plus;
		arr[mth] = 0;
		return;
	}

	solve(plus, minus, mth+1);
	arr[mth] = 0;
	curr -= plus;

	curr -= minus;
	arr[mth] = -minus;
	recent = arr[mth] + arr[mth-1] + arr[mth-2] + arr[mth-3] + arr[mth-4]; 
	cout<<recent<<" "<<mth<<endl;
	if(mth>6 && recent>0){
		curr += minus;
		arr[mth] = 0;
		return;
	}

	solve(plus, minus, mth+1);
	arr[mth] = 0;
	curr += minus;
}

int main(){
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF){
		best = 0;
		curr = 0;
		solve(a,b, 1);
		if(best>0)
			cout<<best<<endl;
		else
			cout<<"Deficit"<<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
long long n, needed=0, minCost = 101, total=0;
long long need[100001], cost[100001];
int main(){
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>need[i]>>cost[i];
		needed += need[i];
		if (cost[i]<=minCost)
			minCost = cost[i];

	}
	int i=0;
	while(needed>0){
		if (cost[i] != minCost){
			total += need[i] * cost[i];
			needed -= need[i];
		}else{
			total += needed*minCost;
			needed = 0;
		}
		++i;
	}

	cout<<total<<endl;
	return 0;	
}
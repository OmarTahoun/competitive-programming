#include <iostream>
using namespace std;
long long n,bestCost = 101, total=0;
long long need[100001], cost[100001];
int main(){
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>need[i]>>cost[i];
	for (int i = 0; i <n; ++i){
		bestCost = min(bestCost, cost[i]);
		total += bestCost*need[i];
	}

	cout<<total<<endl;
	return 0;	
}
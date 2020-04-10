#include <bits/stdc++.h>
using namespace std;

vector<long long> odds;
int n;
long long total = 0;
int main(){
	scanf("%d", &n);
	long long x;
	for (int i = 0; i < n; ++i){
		scanf("%lld", &x);
		if(x%2)
			odds.push_back(x);
		else
			total+=x;
	}

	sort(odds.begin(), odds.end());

	if(int(odds.size()) % 2 == 0){
		for (int i = 0; i < int(odds.size()); ++i)
			total+=odds[i];
	}
	else{
		for (int i = 1; i < int(odds.size()); ++i)
			total+=odds[i];
	}

	cout<<total<<endl;
	return 0;
}
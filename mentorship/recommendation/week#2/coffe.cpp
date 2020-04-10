#include <bits/stdc++.h>
using namespace std;

int n, k, q;
int l, r;
int sums[200005];

int main(){
	scanf("%d %d %d", &n, &k, &q);
	for (int i = 0; i < n; ++i){
		scanf("%d %d", &l, &r);
		sums[l]++;
		sums[r + 1]--;
	}

	for (int i = 1; i <= 200000; ++i)
		sums[i] += sums[i-1];


	for (int i = 1; i <= 200000; ++i){
		if(sums[i] >= k)
			sums[i] = 1;
		else
			sums[i] = 0;
		sums[i] += sums[i-1];
	}

	for (int i = 0; i < q; ++i){
		scanf("%d %d", &l, &r);
		cout<<sums[r] - sums[l-1]<<endl;
	}
	return 0;
}
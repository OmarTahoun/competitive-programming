#include <bits/stdc++.h>
using namespace std;
long long n, k;
int main(){
	scanf("%lld %lld", &n, &k);
	long long turns = n/k;
	if(turns%2)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
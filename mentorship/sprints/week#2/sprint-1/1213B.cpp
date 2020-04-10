#include <bits/stdc++.h>
using namespace std;
int t;
int n;
int arr[150001];
int main(){
	scanf("%d", &t);
	while(t--){
		int smallest = 1000005;
		int ans = 0;
		
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);

		for (int i = n-1; i >= 0; --i){
			if(arr[i] > smallest)
				ans++;
			smallest = min(smallest, arr[i]);
		}
		
		printf("%d\n", ans);
	}
	return 0;
}
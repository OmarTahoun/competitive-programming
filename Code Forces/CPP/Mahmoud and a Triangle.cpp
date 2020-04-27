#include <bits/stdc++.h>
using namespace std;

int n;
int a, b, c;
long long arr[100005];

int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i ++)
		scanf("%lld", &arr[i]);

	sort(arr, arr+n);

	for(int i = 0; i < n-2; i++){
		a = arr[i];
		b = arr[i+1];
		c = arr[i+2];
		if(a+b > c){
			printf("YES\n");
			return 0;
		}
	}

	printf("NO\n");
	return 0;
}
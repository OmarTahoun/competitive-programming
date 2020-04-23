#include <bits/stdc++.h>
using namespace std;

int n;
long long arr[100005];

int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);
	
	int l = -1, r = -1;
	
	for(int i = 0; i < n-1; i++){
		if(arr[i] > arr[i+1]){
			l = i;
			break;
		}
	}
	
	if(l == -1){
		printf("yes\n1 1\n");
		return 0;
	}

	for(int i = l; i < n-1; i++){
		if(arr[i] < arr[i+1]){
			r = i;
			break;
		}
	}
	
	if(r == -1)	r = n-1;
	
	reverse(arr+l, arr+r+1);
	for(int i = 0; i < n-1; i++)
		if(arr[i] > arr[i+1]){
			printf("no\n");
			return 0;
		}

	printf("yes\n%d %d\n", l+1, r+1);
	return 0;
}
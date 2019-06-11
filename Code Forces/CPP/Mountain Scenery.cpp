#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	int arr[201];
	int count = 0;
	for (int i = 1; i <= 2*n+1; ++i)
		cin>>arr[i];

	for (int i = 1; i <= 2*n+1; ++i){
		if(i%2 == 0 && arr[i]-1 > arr[i-1] && arr[i]-1 > arr[i+1] && count<k){
			arr[i] -= 1;
			count += 1;
		}
	}

	for (int i = 1; i <= 2*n+1; ++i)
		cout<<arr[i]<<" ";
	return 0;
}
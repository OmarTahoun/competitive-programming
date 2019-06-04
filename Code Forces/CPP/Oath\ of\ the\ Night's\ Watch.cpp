#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count = 0;
	int arr[100001];
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin>>arr[i];

	sort(arr, arr+n);
	int min = arr[0];
	int max = arr[n-1];
	for (int i = 0; i < n; ++i)
		if (arr[i]>min && arr[i]<max) count+=1;

	cout<<count<<endl;
	return 0;
}
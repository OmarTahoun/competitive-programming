#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int arr[101];
	cin>>n;
	int val;
	for (int i = 0; i < n; ++i){
		cin>>val;
		arr[val-1] = i+1;
	}

	for (int i = 0; i < n; ++i){
		if (i == n-1)
			cout<<arr[i]<<endl;
		else
			cout<<arr[i]<<" ";
	}

	return 0;
}
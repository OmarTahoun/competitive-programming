#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int j = 0; j < t; ++j){
		int n, total = 0;
		int arr[21];
		cin>>n;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		sort(arr, arr+n);
		for (int i = 0; i < n-1; ++i)
			total+= arr[i+1]-arr[i];
		total += arr[n-1] - arr[0];
		cout<<total<<endl;		
	}

	return 0;
}
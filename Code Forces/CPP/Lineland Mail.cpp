#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long arr[100001];
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>arr[i];

	for (int i = 0; i < n; ++i){
		long long mini, maxi;
		if (i==0)
			mini = abs(arr[i]-arr[i+1]);
		else if(i==n-1)
			mini = abs(arr[i]-arr[i-1]);
		else
			mini = min(abs(arr[i]-arr[i-1]), abs(arr[i]-arr[i+1]));
		
		maxi = max(abs(arr[0]-arr[i]), abs(arr[i]- arr[n-1]));
		cout<<mini<<" "<<maxi<<endl;
	}


	return 0;
}
#include <bits/stdc++.h>
using namespace std;


int n, x;
long long arr[100005];
int t;

int main(){
	cin>>t;
	while(t--){
		cin >>n>>x;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];

		sort(arr, arr+n, greater<>());

		for (int i = 1; i < n; ++i)
			arr[i] += arr[i-1];

		bool before = false;
		for (int i = 0; i < n; ++i){
			if(arr[i] / (i+1) >= x){
				continue;
			}
			else{
				cout<<i<<endl;
				before = true;
				break;
			}
		}

		if(!before)
			cout<<n<<endl;
	}
	return 0;
}
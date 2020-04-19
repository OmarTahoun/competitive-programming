#include <bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	for(int i = 1; i<=T; ++i){
		int n;
		int arr[105];
		cin>>n;
		for(int j = 0; j < n; j++)
			cin>>arr[j];

		int cnt = 0;
		for(int j = 1; j < n-1; j++)
			if(arr[j] > arr[j-1] && arr[j] > arr[j+1])
				cnt++;
		printf("Case #%d: %d\n", i, cnt);
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n;
pair<int, int> arr[101];
int main(){
	cin>>n;
	for (int i = 0; i < n; ++i){
		int a;
		cin>>a;
		arr[i] = {a, i};
	}

	sort(arr, arr+n);
	int cnt = 0;
	for (int i = 0; i < n; ++i)
		if(arr[i].second != i)
			cnt++;

	cout<<cnt<<endl;
	return 0;
}
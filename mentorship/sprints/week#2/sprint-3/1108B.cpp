#include <bits/stdc++.h>
using namespace std;
int n;
int arr[129];
map<int, int> freq;
int a = 0, b=0;
int main(){
	cin>>n;

	for (int i = 0; i < n; ++i){
		cin>>arr[i];
		freq[arr[i]] += 1;
		a = max(a, arr[i]);
	}

	for (int i = 0; i < n; ++i){
		if(a % arr[i] != 0 || freq[arr[i]] > 1)
			b = max(b, arr[i]);
	}

	cout<<a<<" "<<b<<endl;
	return 0;
}
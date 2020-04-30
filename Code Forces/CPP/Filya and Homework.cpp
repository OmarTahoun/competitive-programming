#include <bits/stdc++.h>
using namespace std;

int n, x;
set<int> nums;
int arr[3];
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		nums.insert(x);
	}

	if(nums.size() > 3)
		cout<<"No"<<endl;
	else if(nums.size() < 3)
		cout<<"YES"<<endl;
	else{
		int i = 0;
		for(auto x : nums)
			arr[i++] = x;

		if(arr[1] - arr[0] == arr[2] - arr[1])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}
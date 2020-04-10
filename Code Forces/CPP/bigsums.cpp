#include <bits/stdc++.h>
using namespace std;

int main(){
	int nums[4];
	int x;
	for (int i = 0; i < 4; ++i){
		cin>>x;
		nums[i] = x;
	}

	sort(nums,nums+4);
	cout<<nums[3] - nums[0]<<" "
		<<nums[3] - nums[1]<<" "
		<<nums[3] - nums[2]<<endl;


	return 0;
}
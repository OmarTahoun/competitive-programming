#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,sum=0, val;
	cin>>n;
	vector<int> nums;
	for (int i = 0; i < n; ++i)
	{
		cin>>val;
		nums.push_back(val%2);
		sum += val%2;
	}

	if (sum == 1)
		cout<<(find(nums.begin(), nums.end(), 1)-nums.begin())+1<<endl;
	else
		cout<<(find(nums.begin(), nums.end(), 0)-nums.begin())+1<<endl;
	return 0;
}
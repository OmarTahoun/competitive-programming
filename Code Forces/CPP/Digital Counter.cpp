#include <bits/stdc++.h>
using namespace std;

int main(){
	map<char, int> nums = {{'0', 2}, {'1', 7}, {'2', 2}, {'3', 3}, {'4', 3}, {'5', 4}, {'6', 2}, {'7', 5}, {'8', 1}, {'9', 2}};
	string num;
	cin>>num;
	int total = nums[num[0]]*nums[num[1]];
	cout<<total<<endl;
	return 0;
}
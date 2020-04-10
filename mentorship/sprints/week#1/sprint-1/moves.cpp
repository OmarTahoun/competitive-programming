#include <iostream>
using namespace std;

int nums[101];
int possible[2];
int main(){
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>nums[i];

	
	for (int i = 0; i <n; ++i)
		possible[nums[i]%2]++;
	
	cout<<min(possible[0], possible[1])<<endl;
	return 0;
}
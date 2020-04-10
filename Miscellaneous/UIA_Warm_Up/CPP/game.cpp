#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, x, y, val, sum=0;
	vector<int> found;
	cin >> n;
	cin >> x;
	for (int i = 0; i <x; ++i)
	{
		cin>>val;
		found.push_back(val);
		sum+=val;
	}
	cin >> y;
	for (int i = 0; i <y; ++i)
	{
		cin>>val;
		if (find(found.begin(), found.end(), val) != found.end())
			continue;
		sum+=val;
	}
	if (sum == (n*(n+1))/2)
		cout<<"I become the guy."<<endl;
	else
		cout<<"Oh, my keyboard!"<<endl;
	return 0;
}
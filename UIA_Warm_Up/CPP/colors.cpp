#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int count=0, val;
	vector<int> here;
	for (int i = 0; i < 4; ++i)
	{
		cin>>val;
		if (find(here.begin(), here.end(), val) != here.end())
			count+=1;
		else
			here.push_back(val);
	}


	cout<<count<<endl;
	return 0;
}
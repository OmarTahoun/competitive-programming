#include <iostream>

using namespace std;
int main(){
	int n;
	int ranks[26];
	int max = 0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>ranks[i];
		if(ranks[i] >= max)
			max = ranks[i];
	}

	if (max>25)
		cout<<max-25;
	else
		cout<<0;
	return 0;
}
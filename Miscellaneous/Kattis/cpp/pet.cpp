#include <iostream>
using namespace std;

int main(){
	int index=0, max = 0,sum,value;
	for (int i = 0; i < 5; ++i)
	{
		sum=0;
		for (int j = 0; j < 4; ++j)
		{
			cin>>value;
			sum+=value;
		}
		if (sum>=max)
		{
			max = sum;
			index = i+1;
		}
	}

	cout<<index<<" "<<max;
	return 0;
}
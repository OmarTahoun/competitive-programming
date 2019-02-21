#include <iostream>
#include <string>
using namespace std;

int main(){
	int count = 1;
	string number;
	cin>>number;
	for (int i = 0; i < 2; ++i)
	{
		if (number[i] == '0' || number[i] == '9' || number[i] == '6' || number[i] == '2')
		{
			count *= 2;
		}
		if (number[i] == '3' || number[i] == '4')
		{
			count *= 3;
		}
		if (number[i] == '5')
		{
			count *= 4;
		}
		if (number[i] == '1')
		{
			count *= 7;
		}
		if (number[i] == '7')
		{
			count *= 5;
		}
	}

	cout<<count;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main(){
	string n;
	int value = 0;
	cin>>n;
	n = "00"+n;
	for (int i = 0; i < n.length()-2; ++i)
	{
		for (int j = i+1; j < n.length()-1; ++j)
		{
			for (int k = j+1; k < n.length(); ++k)
			{
				value += (n[i]-'0')*100;
				value += (n[j]-'0')*10;
				value += (n[k]-'0')*1;
				if (value%8 == 0)
				{
					cout<<"YES"<<endl<<value;
					return 0;
				}
				value = 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}
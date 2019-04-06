#include <iostream>
#include<string>
using namespace std;


int main(){
	int n, total=0, forward = 0, backward=0;
	cin>>n;
	string current, original;
	cin>>current;
	cin>>original;

	for (int i = 0; i < n; ++i)
	{
		int from = current[i]-'0', to = original[i]-'0';
		backward = abs(from-to);
		forward = 10-abs(from-to);
		total += min(forward, backward);
	}

	cout<<total<<endl;
	return 0;
}


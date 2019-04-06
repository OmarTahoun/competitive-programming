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
		int from = current[i]-'0', to = (int)original[i]-'0';
		forward = abs(from-to);
		backward = abs(from-0)+abs(9-to)+1;
		total += min(forward, backward);
		cout<<i<<" "<<min(forward, backward)<<endl;
	}

	cout<<total<<endl;
	return 0;
}
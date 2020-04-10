#include <iostream>
using namespace std;
int main(){
	long long  n , m, curr = 1, count=0, to;
	cin>>n>>m;
	for (int i = 0; i < m; ++i)
	{
		cin>>to;
		if (curr<=to)
			count += to - curr;
		else
			count += n - (curr-to);
		curr = to;
	}

	cout<<count<<endl;
	return 0;
}
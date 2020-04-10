#include <iostream>

using namespace std;

int main(){
	int n, a, b, count =0;
	cin>>n>>a>>b;
	for (int i = 1; i <=n; ++i)
	{
		if (n-i<=b && i-1>=a)
			count+=1;
	}

	cout<<count<<endl;
	return 0;
}
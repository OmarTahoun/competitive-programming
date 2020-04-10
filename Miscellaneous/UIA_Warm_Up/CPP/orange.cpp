#include <iostream>
using namespace std;
int main(){
	int n,  val;
	float total=0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin>>val;
		total+=val;
	}

	printf("%.6f\n",(total/(n*100))*100);
	return 0;
}
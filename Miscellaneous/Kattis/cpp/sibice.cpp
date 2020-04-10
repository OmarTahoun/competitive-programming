#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n, w, h;
	double x;
	cin>>n>>w>>h;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		if (x<=pow((w*w + h*h),0.5))
		{
			cout<<"DA"<<endl;
		}
		else{
			cout<<"NE"<<endl;
		}
	}

	return 0;
}
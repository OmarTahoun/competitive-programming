#include <iostream>
using namespace std;
int main(){
	int n, maxind=0, minind=0, val, max=0,min=101, ans=0;
	cin>>n;
	cin>>val;
	min = val;
	max = val;
	for (int i = 1; i < n; ++i)
	{

		cin>>val;
		if (val>max){
			max = val;
			maxind = i;
		}
		else if(val<=min){
			min = val;
			minind = i;
		}
	}
	ans = (maxind-1)+(n-minind);
	if (maxind > minind)
		ans-=1;
	cout<<ans<<endl;


	return 0;
}
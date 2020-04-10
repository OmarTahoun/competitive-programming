#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, m,maxi,max;
	int a[101];
	cin>>n>>m;
	cin>>a[0];
	max = ceil((double)a[0]/m);
	maxi=0;
	for (int i = 1; i < n; ++i){
		cin>>a[i];
		if (ceil((double)a[i]/m)>=max){
			maxi = i;
			max = ceil((double)a[i]/m);
		}
	}
	

	cout<<maxi+1<<endl;
	return 0;
}
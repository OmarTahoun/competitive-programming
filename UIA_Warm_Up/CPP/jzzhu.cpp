#include <iostream>

using namespace std;

int main(){
	int n, m,maxi,max;
	int a[101];
	cin>>n>>m;
	cin>>a[0];
	max = a[0];
	maxi=0;
	for (int i = 1; i < n; ++i){
		cin>>a[i];
		if (a[i]>=max){
			maxi = i;
			max = a[i];
		}
	}
	

	cout<<maxi+1<<endl;
	return 0;
}
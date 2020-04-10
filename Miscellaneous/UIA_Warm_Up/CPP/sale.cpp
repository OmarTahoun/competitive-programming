#include <iostream>
#include <algorithm>
using namespace std;

int n, m,val, total=0;
int gains[105];
int main(){
	cin>>n>>m;
	for (int i = 0; i < n; ++i){
		cin>>val;
		if (val<0)
			gains[i] = abs(val);
	}
	int size = sizeof(gains)/sizeof(gains[0]);
	sort(gains, gains+size);

	for (int i = size-m; i < size; ++i)
		total += gains[i];

	cout<<total<<endl;
	return 0;
}
#include <iostream>
using namespace std;

long long a[100001];
int main(){
	int n, m;
	cin>>n>>m;
	long long max = 0, total=0;

	for (int i = 0; i < n; ++i){
		cin>>a[i];
		if (a[i]>=max)
			max = a[i];
	}

	for (int i = 0; i < n; ++i){
		total += a[i];
		if (total>max){
			cout<<total<<endl;
			break;
		}
	}
	return 0;
}
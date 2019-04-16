#include <iostream>
using namespace std;

int main(){
	long long time[10001];
	float v[10001];
	int n;
	double total = 0;
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>time[i]>>v[i];
	for (int i = 0; i < n-1; ++i){
		total += ((time[i+1]-time[i]) * (v[i]+v[i+1])/2)/1000;
	}

	printf("%.6f\n", total);
	return 0;
}
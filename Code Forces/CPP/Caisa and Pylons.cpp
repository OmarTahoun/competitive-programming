#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, x, prev=0, total = 0, energy = 0;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>x;
		long long delta = prev - x;
		prev = x;
		energy += delta;
		if(energy<0){
			total += abs(energy);
			energy = 0;
		}
	}
	cout<<total<<endl;
	return 0;
}
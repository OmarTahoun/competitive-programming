#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i){
		int h, m;
		cin>>h>>m;
		int total = 60-m;
		total += (24 - (h+1))*60;
		cout<<total<<endl;
	}

	return 0;
}
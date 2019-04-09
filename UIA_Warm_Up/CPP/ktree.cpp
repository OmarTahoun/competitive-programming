#include <iostream>
using namespace std;

int main(){
	long long  count = 0;
	int n, k, d;
	cin>>n>>k>>d;
	long long total = d;
	long long needed = n-total;
	for (int i = 1; i <=k; ++i){
		if (needed - i == 0){
			count += 1;
		}else if(needed - i < 0)
	}

	return 0;
}
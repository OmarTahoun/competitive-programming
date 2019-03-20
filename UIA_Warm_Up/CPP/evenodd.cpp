#include <iostream>
using namespace std;
int main(){
	long long n, k, middle;
	cin >> n >> k;
	middle = (n+1)/2;
	if (k<=middle)
		cout<< (k*2)-1 << endl;
	else
		cout<< (k - middle) * 2 << endl;
	return 0;
}
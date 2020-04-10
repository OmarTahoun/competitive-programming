#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int t;
	int k, b, n;
	cin >> t;
	for (int i = 0 ; i < t; ++i) {
		cin >> k >> b >> n;
		int sum = 0;
		while (n > 0) {
			sum += (n % b) * (n % b);
			n /= b;
		}
		cout << k << " " << sum << endl;
	}

	return 0;
}
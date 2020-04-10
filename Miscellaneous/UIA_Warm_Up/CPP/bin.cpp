#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	long long rev=0;
	string res = "";
	cin >> n;
	while(n>0){
		if (n%2 != 0)
			res += "1";
		else
			res += "0";

		n = n / 2;
	}

	rev = stoull(res, 0, 2);

	cout << rev<<endl;

	return 0;
}
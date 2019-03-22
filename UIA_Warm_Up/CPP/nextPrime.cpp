#include <iostream>

using namespace std;

int main(){
	int primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	int n, m;
	cin>>n>>m;
	for (int i = 0; i < primes.size(); ++i)
		{
			if (primes[i] == n)
				if (primes[i+1] == m){
					cout<<"YES"<<endl;
					return 0;
				}
		}
	cout<<"NO"<<endl;
	return 0;
}
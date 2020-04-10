#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	int q;
	cin>>q;
	while(q--){
		cin>>n;
		int counter = 0;
		while(n%5 == 0){
			n = (n*4) / 5;
			counter++;
		}

		while(n%3 == 0){
			n = (n*2) / 3;
			counter++;
		}

		while(n%2 == 0){
			n /= 2;
			counter++;
		}

		if(n == 1)
			cout<<counter<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}
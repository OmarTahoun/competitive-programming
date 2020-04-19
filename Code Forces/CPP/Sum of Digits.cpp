#include <bits/stdc++.h>
using namespace std;


long long n;
int cnt = 0;
int main(){
	cin>>n;
	while(n > 9){
		cnt++;
		int temp = 0;
		while(n != 0){
			temp += n%10;
			n /= 10;
		}
		n = temp;
	}

	cout<<cnt<<endl;
	return 0;
}
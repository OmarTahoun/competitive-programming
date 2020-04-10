#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k1, k2;
		cin>>n>>k1>>k2;
		bool flag = false;
		int card;
		for (int i = 0; i < k1; ++i){
			cin>>card;
			if(card == n)
				flag = true;
		}
		for (int i = 0; i < k2; ++i)
			cin>>card;

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
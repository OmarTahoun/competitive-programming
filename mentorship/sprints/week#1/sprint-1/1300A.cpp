#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum=0, total = 0;
		int num;
		for (int i = 0; i < n; ++i){
			cin>>num;
			if(num == 0){
				sum+= 1;
				total++;
			}
			else
				sum += num;
		}
		if(sum == 0)
			total += 1;
		cout<<total<<endl;
	}
	return 0;
}
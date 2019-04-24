#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for (int i = 0; i <t; ++i){
		int n=9, total = 0, prev;
		cin>>prev;
		while(n!=0){
			cin>>n;
			if (n-2*prev >= 0)
				total+= n-2*prev;
			prev = n;
		}
		cout<<total<<endl; 
	}
	return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
	int n, div=1;
	cin>>n;
	string prev="", curr;
	cin>>prev;
	for (int i = 1; i < n; ++i){
		cin>>curr;
		if (prev[1] == curr[0])
			div+=1;
		prev = curr;		
	}

	cout<<div<<endl;

	return 0;
}
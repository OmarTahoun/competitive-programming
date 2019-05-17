#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a=0, d=0;
	string state;cin>>state;
	for (int i = 0; i < n; ++i){
		if (state[i] == 'A')
			a++;
		else
			d++;
	}
	
	if (a == d)
		cout<<"Friendship"<<endl;
	else if(a>d)
		cout<<"Anton"<<endl;
	else
		cout<<"Danik"<<endl;
	return 0;
}
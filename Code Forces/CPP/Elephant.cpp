#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, pos = 0, count = 0;
	cin>>x;
	while(pos<x){
		pos+=5;
		count+=1;
	}

	cout<<count<<endl;
	return 0;
}
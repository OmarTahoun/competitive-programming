#include <bits/stdc++.h>
using namespace std;

int main(){
	int cool=0, norm=0;
	int r, b;
	cin>>r>>b;

	cool += min(r,b);
	r-= cool;
	b-= cool;
	norm = max(r,b)/2;


	cout<<cool<<" "<<norm<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;


int main(){
	int a, b, c, dista,distb,distc;
	cin>>a>>b>>c;
	dista = abs(b-a) + abs(c-a);
	distb = abs(b-a) + abs(c-b);
	distc = abs(b-c) + abs(c-a);

	cout<<min(distb, min(dista, distc))<<endl;
	return 0;
}
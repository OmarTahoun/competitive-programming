#include <bits/stdc++.h>
using namespace std;

int main(){
	int y, x;
	cin>>y>>x;
	int z = 7 - max(y,x);
	if (z%6 == 0) cout<<z/6<<"/"<<1<<endl;
	else if (z%3 == 0) cout<<z/3<<"/"<<2<<endl;
	else if (z%2 == 0) cout<<z/2<<"/"<<3<<endl;
	else cout<<z<<"/"<<6<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	string n;
	string res;
	cin>>n;
	res = n;
	reverse(n.begin(), n.end());
	res += n;
	cout<<res<<endl;
	return 0;
}
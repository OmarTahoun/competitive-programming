#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin>>a>>b;
	for (int i = 0; i < (int)a.size(); ++i)
		a[i] = tolower(a[i]);

	for (int i = 0; i < (int)b.size(); ++i)
		b[i] = tolower(b[i]);

	if(a==b)
		cout<<0<<endl;
	else if(a>b)
		cout<<1<<endl;
	else
		cout<<-1<<endl;
	return 0;
}
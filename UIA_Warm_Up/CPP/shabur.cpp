#include <iostream>
#include<string>

using namespace std;
int main(){
	string a, b, res = "";
	cin>>a;
	cin>>b;
	for (int i = 0; i < a.length(); ++i)
	{
		if (a[i] != b[i])
			res+="1";
		else
			res+="0";
	}

	cout<<res<<endl;
	return 0;
}
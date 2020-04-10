#include <iostream>

using namespace std;

int main(){
	int n, val;
	float res;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>val;
		res = 360.0/(180-val);
		if (res-(int)res == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}
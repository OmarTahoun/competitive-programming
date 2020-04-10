#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ends[101];
	for (int i = 0; i < n; ++i){
		int a,b;
		cin>>a>>b;
		ends[i] = b;
	}

	int x;
	cin>>x;
	int total = 0;
	for (int i = 0; i < n; ++i){
		if(x>ends[i])
			total++;
		else
			break;
	}

	cout<<n-total<<endl;
	return 0;
}
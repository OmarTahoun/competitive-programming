#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i){
		string s;
		int total = 0, sofar = 0;
		cin>>s;

		for (int j = 0; j < s.length(); ++j){
			if(s[j] == 'X')
				sofar = 0;
			else
				sofar+=1;

			total+=sofar;
		}

		cout<<total<<endl;
	}

	return 0;
}
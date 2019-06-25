#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long count = 0;
	string conf = "";
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			if((i+j) % 2 == 0){
				conf+="C";
				count+=1;
			}
			else
				conf+='.';
		}
		conf+="\n";
	}

	cout<<count<<endl<<conf<<endl;
	return 0;
}
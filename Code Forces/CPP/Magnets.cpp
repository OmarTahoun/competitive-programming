#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count = 0;
	cin>>n;
	string magnet;
	string prev;
	cin>>prev;
	for (int i = 1; i < n; ++i){
			cin>>magnet;
			if (prev[1] == magnet[0])
				count+=1;
			prev = magnet;
		}	

	cout<<count+1<<endl;
	return 0;
}
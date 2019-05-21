#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count = 0;
	string stones;
	cin>>n;
	cin>>stones;
	for (int i = 0; i < n-1; ++i){
		if (stones[i] == stones[i+1])
			count+=1;
	}

	cout<<count<<endl;
	return 0;
}

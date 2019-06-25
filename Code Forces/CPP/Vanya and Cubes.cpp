#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, total=0, i = 0;
	cin>>n;
	while(total<=n){
		i += 1;
		total += (i*(1+i))/2;
	}

	cout<<i-1<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[5];
	int sum = 0;
	for (int i = 0; i < 5; ++i){
		cin>>a[i];
		sum+=a[i];
	}

	if (sum%5 != 0 || sum == 0)
		cout<<-1<<endl;
	else
		cout<<sum/5<<endl;
	return 0;
}
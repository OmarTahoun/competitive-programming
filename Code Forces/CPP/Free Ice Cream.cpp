#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, total, count =0;
	cin>>n>>total;

	for (int i = 0; i < n; ++i){
		char op;
		long long amount;
		cin>>op;
		cin>>amount;
		if (op=='+')
			total+=amount;
		else
			if (total>=amount)
				total -= amount;
			else
				count+=1;
	}

	cout<<total<<" "<<count<<endl;
	return 0;
}
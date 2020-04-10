#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string formula;
		cin>>formula;
		double total = 0;
		double recent = 0;
		for (int i = 0; i < formula.length(); ++i){
			if(formula[i] == 'C')
				recent = 12.01;
			if(formula[i] == 'H')
				recent = 1.008;
			if(formula[i] == 'O')
				recent = 16.00;
			if(formula[i] == 'N')
				recent = 14.01;

			if(isdigit(formula[i])){
				int a = int(formula[i] - '0');
				int b = 0;
				if(isdigit(formula[i+1])){
					a*=10;
					b = int(formula[i+1] - '0');
					i++;
				}
				int all = a+b;
				total += (all-1)*recent;
			}else{
				total += recent;
			}
		}

		printf("%.3f\n", total);;
	}



	return 0;
}
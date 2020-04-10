#include <bits/stdc++.h>
using namespace std;

int n, m;
int main(){
	scanf("%d %d", &n, &m);
	if(n > 31) cout<<m<<endl;
	else{
		long long z = 1;
		while(n!=0){
			n--;
			z *= 2;
		}

		cout<<m%z<<endl;
	}



	return 0;
}
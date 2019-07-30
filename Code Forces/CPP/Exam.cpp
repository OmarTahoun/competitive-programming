#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i, j;
	cin>>n;
	if(n>=4){
		if (n%2 == 0){
			i = n-1;
			j = n;
		}

		else{
			i = n;
			j = n-1;
		}
		cout<<n<<endl;
		for (;i>0; i-=2)
			cout<<i<<" ";
		for (;j>1; j-=2)
			cout<<j<<" ";
		cout<<endl;
	}
	else if(n==3)
		cout<<2<<endl<<1<<" "<<3<<endl;
	else
		cout<<1<<endl<<1<<endl;



	return 0;
}
#include<iostream>
using namespace std;

int main(){
	int num, den;
	int a,b;
	cin>>num>>den;
	while(num!=0 && den!=0){
		a = num/den;
		b = num - (a*den);

		cout<<a<<" "<<b<<" / "<<den<<endl;
		cin>>num>>den;
	}
	return 0;
}

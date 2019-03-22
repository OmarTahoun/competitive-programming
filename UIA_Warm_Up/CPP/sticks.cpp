#include <iostream>
using namespace std;

int main(){
	int a, b, count=0;
	cin>>a>>b;
	while(a*b > 0){
		a -= 1;
		b -= 1;
		count+=1;
	}
	if (count % 2 !=0)
		cout<<"Akshat"<<endl;
	else
		cout<<"Malvika"<<endl;
	return 0;
}
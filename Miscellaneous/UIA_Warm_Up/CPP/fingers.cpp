#include <iostream>

using namespace std;


int main(){
	int n, sum=0,count=0;
	int f[101];
	cin>>n;

	for (int i = 0; i < n; ++i){
		cin>>f[i];
		sum+=f[i];
	}

	n +=1;
	for (int i = 1; i <=5; ++i){

		if ((i+sum)%n != 1){
			count+=1;
		}
	}

	cout<<count<<endl;
	return 0;
}
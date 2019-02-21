#include<iostream>
using namespace std;

int main(){
	int org[6] = {1,1,2,2,2,8};
	int found[6];
	for(int i =0; i<6; ++i){
		cin>>found[i];
	}

	for(int i = 0; i<6; ++i){
		cout<<org[i]-found[i]<<" ";
	}
	return 0;
}

#include <iostream>

using namespace std;
int main(){
	int a, b, c, ans=0, num=0;
	int arr[1000005] = {};
	cin>>a>>b>>c;
	for (long long i = 1; i <= (a*b*c) ; ++i){
		for (long long j = i; j <= (a*b*c); j += i){
			++arr[j];
		}
	}


	for (int i = 1; i <=a; ++i){
		for (int j = 1; j <=b; ++j){
			for (int k = 1; k <=c; ++k){
				num = i*j*k;
				ans+= arr[num];
			}
		}
	}


	cout<<ans%1073741824<<endl;
	return 0;
}
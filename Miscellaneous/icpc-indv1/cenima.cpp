#include <iostream>
#include <string>
using namespace std;
long long a[100001];
string	sides[100001];
int main(){
	int n;
	for (int i = 1; i <= n; ++i){
		cin>>a[i];
	}

	for (int i = 1; i <= n; ++i){
		if (sides[i-1] == "left"){
			if (a[i]>a[i-1]){
				sides[i] = "left";
			}
			for (int j = i; j <= n; ++j){
				if (a[i]<a[j]){
					sides = "no right"
				}
			}
		}
	}

	return 0;
}
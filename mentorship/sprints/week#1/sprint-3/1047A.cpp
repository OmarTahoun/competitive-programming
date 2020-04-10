#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int i = 1; i < n; ++i){
		if(i%3)
			for (int j = i; j < n; ++j){
				if(j%3){
					int k = n-(i+j);
					if(k%3){
						cout<<i<<" "<<j<<" "<<k<<endl;
						return 0;
					}

				}
				
			}
	}

	return 0;
}
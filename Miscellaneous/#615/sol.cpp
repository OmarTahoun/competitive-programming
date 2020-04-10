#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i){
		int a, b, c, n;
		cin>>a>>b>>c>>n;
		while(n>0){
			if(a == b == c){
				if(n%3 == 0)
					n=0;
				break;
			}
			if(a == min(a, min(b, c))){
				a+=1;
				n-=1;
			}
			else if(b == min(a, min(b, c))){
				b+=1;
				n-=1;
			}
			else{
				c+=1;
				n-=1;
			}
		}

		if(a == b == c && n == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}
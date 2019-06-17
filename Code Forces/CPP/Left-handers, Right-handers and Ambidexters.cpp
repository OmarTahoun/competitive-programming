#include <bits/stdc++.h>
using namespace std;

int main(){
	int l, r, a;
	cin>>l>>r>>a;

	while(l<r && a>0){
		l+=1;
		a-=1;
	}
	while(l>r && a>0){
		r+=1;
		a-=1;
	}

	if(a == 0){
		cout<<2*min(r,l)<<endl;
		return 0;
	}

	if(a%2==0){
		l += a/2;
		r += a/2;
		cout<<2*min(r,l)<<endl;
		return 0;	
	}
	else{
		a -=1;
		l += a/2;
		r += a/2;
		cout<<2*min(r,l)<<endl;
		return 0;		
	}


	return 0;
}
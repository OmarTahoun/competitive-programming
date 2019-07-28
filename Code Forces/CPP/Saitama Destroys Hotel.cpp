#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, s, floor, time;
	cin>>n>>s;
	for (int i = 0; i < n; ++i){
		cin>>floor>>time;
		times[floor] = time;
	}

	int taken = 0;
	for (int i = s; i >0; ++i){
		if (times[i]!=0){
			taken+=abs(taken-times[i]);
		}
		taken+=1;
		cout<<taken<<endl;
	}


	return 0;
}
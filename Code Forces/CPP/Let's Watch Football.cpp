#include <bits/stdc++.h>
using namespace std;

bool check(int t, int a, int b, int total_time){
	if(total_time*b < (total_time-t)*a)
			return false;
	return true;
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	int total_time = (a*c)/b;
	for (int t = 1; t <= total_time ; ++t)
		if (check(t, a, b, total_time)){
			cout<<t<<endl;
			break;
		}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[1001];
	int n, bowl ,plate, count = 0;
	cin>>n>>bowl>>plate;

	for (int i = 0; i < n; ++i){
		cin>>a[i];
		if(a[i]==1){
			if(bowl>0)
				bowl -=1;
			else
				count+=1;
		}
		
		else{
			if (plate>0)
				plate -= 1;
			else if (bowl>0)
				bowl-=1;
			else
				count+=1;
		}
	}

	cout<<count<<endl;
	return 0;
}
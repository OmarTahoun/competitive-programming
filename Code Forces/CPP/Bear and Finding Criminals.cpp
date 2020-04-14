#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a;
	cin>>n>>a;

	int cities[101];
	int total_criminals = 0;
	
	for (int i = 1; i <= n; ++i)
		cin>>cities[i];

	for(int i = 1; i <= n; ++i){
		int distance = abs(a-i);
		if(distance == 0 && cities[a] == 1){
			total_criminals++;
		}
		else if(a + distance <= n && a - distance >= 1){
			if(cities[a + distance] == 1 && cities[a - distance] == 1){
				total_criminals += 2;
				cities[a + distance] = 0;
				cities[a - distance] = 0;			
			}
		}
		else{
			if(a-distance < 1 && cities[a+distance] == 1){
				total_criminals++;
			}
			else if(a+distance > n && cities[a-distance] == 1){
				total_criminals++;
			}
		}
	}

	cout<<total_criminals<<endl;
	return 0;
}
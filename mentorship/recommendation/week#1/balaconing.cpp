#include <bits/stdc++.h>
using namespace std;

int T;
float L, D, H, V;
const float g = 9.81;

int main(){
	scanf("%d", &T);
	while(T--){
		scanf("%f %f %f %f", &L, &D, &H, &V);
		L /= 1000;
		D /= 1000;
		H /= 1000;
		V /= 1000;

		float time = sqrt((2*H) / g);
		float displacement = V*time;
		
		float e1 = D, e2 = D + L;
		if(abs(displacement - e1) <= 0.5 || abs(displacement - e2) <= 0.5)
			cout<<"EDGE"<<endl;
		else if(displacement > e1+0.5 && displacement < e2-0.5)
			cout<<"POOL"<<endl;
		else
			cout<<"FLOOR"<<endl;
	}
	return 0;
}
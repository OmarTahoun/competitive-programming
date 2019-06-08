#include <bits/stdc++.h>
using namespace std;
#define M_PI       3.14159265358979323846
int main(){
	double d, h, v, e;
	cin>>d>>h>>v>>e;
	double area = (M_PI * pow(d,2))/4.0;
	double speed = v / area;
	if (speed>e){
		cout<<"YES"<<endl;
		double time = h;
		time /= ((4*v)/(M_PI*pow(d,2)))-e;
		printf("%.8f\n", time);
	}
	else
		cout<<"NO"<<endl;



	return 0;
}
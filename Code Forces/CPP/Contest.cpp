#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int misha = max((3*a)/10 , a-(a/250) * c);
	int vasya = max((3*b)/10 , b-(b/250) * d);

	if (vasya == misha)
		printf("Tie\n");
	else if(vasya>misha)
		printf("Vasya\n");
	else
		printf("Misha\n");


	return 0;
}
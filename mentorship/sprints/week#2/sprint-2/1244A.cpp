#include <bits/stdc++.h>
using namespace std;
float a,b,c,d,k;
int main(){
	int T;
	cin>>T;
	while(T--){
		scanf("%f %f %f %f %f", &a, &b, &c, &d, &k);
		int x = ceil(a/c);
		int y = ceil(b/d);
		if(x+y > k)
			printf("-1\n");
		else
			printf("%d %d\n", x, y);
	}
	return 0;
}
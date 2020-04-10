#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int smallest = min(a, min(b/2, c/4));
	cout<<smallest*7<<endl;


	return 0;
} 
#include <bits/stdc++.h>
using namespace std;
int p, q, l, r, a, b, c, d;

int z[100005];
int can[100005];

int cnt = 0;
int main(){
	cin>>p>>q>>l>>r;

	for(int i = 0; i < p; i++){
		cin>>a>>b;
		for(int j = a; j <= b; j++)
			z[j] = 1;
	}

	for(int i = 0; i < q; i++){
		cin>>c>>d;
		for(int j = c; j <= d; j++)
			for(int k = l; k <= r; k++)
				if(z[j+k]) can[k] = 1;
	}

	for(int i = l; i <= r; i++)
		cnt += can[i] == 1 ? 1 : 0;
	cout<<cnt<<endl;
	return 0;
}
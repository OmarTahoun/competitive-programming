#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	char pixel;
	bool color = false;
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j){
			cin>>pixel;
			if (pixel=='C' || pixel == 'M' || pixel == 'Y')
				color = true;
		}

	if(color)
		cout<<"#Color"<<endl;
	else
		cout<<"#Black&White"<<endl;

	return 0;
}
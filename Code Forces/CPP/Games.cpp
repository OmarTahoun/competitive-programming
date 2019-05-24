#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count = 0;
	int home[31];
	int away[31];
	for (int i = 0; i < n; ++i)
		cin>>home[i]>>away[i];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (i!=j && home[i] == away[j])
				count+=1;

	cout<<count<<endl;
	return 0;
}
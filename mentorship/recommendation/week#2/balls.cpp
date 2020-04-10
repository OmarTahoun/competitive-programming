#include <iostream>
#include <map>
using namespace std;

map<string, int> freq;

int main(){
	int n, m, x=0;
	scanf("%d %d", &n, &m);
	string str;
	for (int i = 0; i < n; ++i){
		cin>>str;
		freq[str] = 1;
	}
	for (int i = 0; i < m; ++i){
		cin>>str;
		if(freq[str] != 0){
			x++;
		}
	}

	if(x%2)
		m--;
	if(n <= m)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}
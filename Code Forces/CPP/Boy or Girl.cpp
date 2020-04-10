#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");

int main(){
	int n, m;
	cin>>n>>m;
	int a =n, b = m;
	string res1 = "", res2 = "";
	int total = n+m;

	for (int i = 0; i < total; i++){
		if(n>m){
			res1 += 'B';
			n--;
		}else{
			res1 += 'G';
			m--;
		}
	}

	for (int i = 0; i < total; i++){
		if(a>=b){
			res2 += 'B';
			a--;
		}else{
			res2 += 'G';
			b--;
		}
	}

	int count1 = 0, count2=0;
	for (int i = 0; i < total-1; ++i){
		if(res1[i] != res1[i+1])
			count1++;
		if(res2[i] != res2[i+1])
			count2++;
	}
	if(count2>count1)
		cout<<res2<<endl;
	else
		cout<<res1<<endl;
	return 0;
}
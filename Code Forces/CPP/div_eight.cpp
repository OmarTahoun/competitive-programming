#include <bits/stdc++.h>
using namespace std;

int main(){
	string num;
	cin>>num;
	num = "00"+num;

	int len = num.length();
	for (int i = 0; i < len-2; ++i)
		for (int j = i+1; j < len-1; ++j)
			for (int k = j+1; k < len; ++k){
				int val = 0;
				val += (num[i]-'0') * 100;
				val += (num[j]-'0') * 10;
				val += (num[k]-'0') * 1;
				if(val%8 == 0){
					cout<<"YES\n"<<val<<endl;
					return 0;
				}
			}

	cout<<"NO"<<endl;
	return 0;
}
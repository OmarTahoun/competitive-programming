#include <bits/stdc++.h>
using namespace std;

int n;
long long total_first = 0;
long long total_second = 0;
vector<long long> first;
vector<long long> second;
long long x;
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%lld", &x);
		if(x < 0){
			second.push_back(-x);
			total_second += -x;
		}else{
			first.push_back(x);
			total_first += x;
		}
	}

	if(total_first>total_second)
		cout<<"first"<<endl;
	else if(total_first<total_second)
		cout<<"second"<<endl;
	else{
		if(first > second)
			cout<<"first"<<endl;
		else if(first < second)
			cout<<"second"<<endl;
		else if(x > 0)
			cout<<"first"<<endl;
		else
			cout<<"second"<<endl;
	}
	return 0;
}
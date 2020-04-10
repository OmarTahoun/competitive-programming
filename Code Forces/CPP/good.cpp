#include <bits/stdc++.h>
using namespace std;
#define lld long long int

const lld largest = 1350851717672992089;

vector<lld> a, b;
vector<lld> x, y;
lld num = 1;

void pre(){
	for (int i = 0; i <39; ++i){
		if(i<23)
			x.push_back(num);
		else
			y.push_back(num);
		num *= 3;
	}
}
void gena(){
	for (int i = 0; i < 4194304; ++i){
		lld sum = 0;
		for (int j = 0; j < 20; ++j){
			cout<<i<<" "<<j<<" -> ";
			cout<<(i&(1<<j))<<endl;
		}
	}
	// if(i == 22){
	// 	a.push_back(sum);
	// 	return;
	// }
	// gena(sum+x[i], i+1);
	// gena(sum, i+1);
}

void genb(lld sum, int i){
	if(i == 17){
		b.push_back(sum);
		return;
	}
	genb(sum+y[i], i+1);
	genb(sum, i+1);
}

int main(){
	pre();
	gena();
	// genb(0, 0);
	// sort(b.begin(), b.end());
	// sort(a.begin(), a.end());
	// while (b.back() > largest) b.pop_back();
	
	// int t;
	// cin>>t;
	// while(t --){
	// 	lld n, ans;
	// 	ans = largest;
	// 	cin>>n;

	// 	for(auto& x:b){
	// 		if(x>=ans){
	// 			ans = min(ans, x);
	// 		 	break;
	// 		}
	// 		auto it = lower_bound(a.begin(), a.end(), n-x);
	// 		if(it == a.end()) continue;
	// 		lld tmp = x + *it;
	// 		ans = min(ans, tmp);
	// 	}
	// 	cout<<ans<<endl;
	// }
}
#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<int> alive;
int ans[300005];

int main(){
	int n, m;
	scanf("%d %d", &n,&m);
	for (int i = 1; i <= n; ++i)
		alive.insert(i);

	int l, r, x;
	for (int i = 0; i < m; ++i){
		scanf("%d %d %d", &l, &r, &x);
		set<int>::iterator it = alive.lower_bound(l);
		vector<int> dead;
		while(it != alive.end()){
			int knight = *it;

			if(knight > r)
				break;

			if(knight != x){
				dead.push_back(knight);
				ans[knight] = x;
			}
			it++;
		}
		for (int j = 0; j < dead.size(); ++j)
			alive.erase(dead[j]);
	}

	for (int i = 1; i <= n; ++i)
		cout<<ans[i]<<" ";
	return 0;
}

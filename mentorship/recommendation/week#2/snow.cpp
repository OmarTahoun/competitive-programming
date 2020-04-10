#include <bits/stdc++.h>
using namespace std;
int n;
int piles[100005], heat[100005];

int main(){
	scanf("%d", &n);
	
	for (int i = 0; i < n; ++i)
		scanf("%d", &piles[i]);

	for (int i = 0; i < n; ++i)
		scanf("%d", &heat[i]);


	for (int i = 0; i < n; ++i){
		int ans = 0;
		for (int j = 0; j < i+1; ++j){
			if(piles[j] > 0){
				int melted = piles[j] - heat[i];
				if(melted < 0) melted = piles[j];
				else melted = heat[i];

				ans += melted;
				piles[j] -= heat[i];
			}

			if(piles[j] < 0) piles[j] = 0;
		}

		cout<<ans<<" ";
	}
	cout<<"\n";
	return 0;
}
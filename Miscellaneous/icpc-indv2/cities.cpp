#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i){
		int n, m;
		int max_diff = -205;
		int mid_max = -101;
		string res;
		scanf("%d%d", &n,&m);

		for (int i = 0; i < n; ++i){
			int a[11], b[11];
			int maxa=-101,minb=101;

			char tmp[101];
			scanf("%100s", tmp);
			string name = tmp;

			for (int j = 0; j < m; ++j){
				scanf("%d", &a[i]);
				if (a[i] > maxa)
					maxa = a[i];
			}

			for (int j = 0; j < m; ++j){
				scanf("%d", &b[i]);
				if (b[i] < minb)
					minb = b[i];
			}
			
			if (abs(maxa-minb)>max_diff){
				max_diff = abs(maxa-minb);
				res = name;
			}else if(abs(maxa-minb) == max_diff){
				if (maxa> mid_max){
					mid_max = maxa;
					res = name;
				}
			}
		}
		printf("%s\n", res.c_str());
	}

	return 0;
}
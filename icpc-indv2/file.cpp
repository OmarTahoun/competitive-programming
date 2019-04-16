#include <iostream>
using namespace std;

long long a[201];
long long b[201];
long long c[201];
long long d[201];
long long e[201];
long long f[201];
int main(){
	// freopen("international.in", "r", stdin);
	int t, n;
	long long sum = 0, total = 0, x, y;
	cin>>t;
	for (int i = 0; i < t; ++i){
		cin>>n>>x>>y;
		for (int i = 0; i < n; ++i){
			scanf("%lld", &a[i]);
		}
		
		for (int i = 0; i < n; ++i){
			scanf("%lld", &b[i]);
		}

		for (int i = 0; i < n; ++i){
			scanf("%lld", &c[i]);
		}

		for (int i = 0; i < n; ++i){
			scanf("%lld", &d[i]);
		}

		for (int i = 0; i < n; ++i){
			scanf("%lld", &e[i]);
		}

		for (int i = 0; i < n; ++i){
			scanf("%lld", &f[i]);
		}

		for (int i = 0; i < n; ++i)
		{	
			sum += a[i];
			if (sum>=y){
				sum = 0;
				// i+=1;	
				continue;
			}
			for (int j = 0; j < n; ++j)
			{
				sum += b[j];
				if (sum>=y){
					sum = 0;
					// j+=1;
					continue;
				}
				for (int k = 0; k < n; ++k)
				{
					sum += c[k];
					if (sum>=y){
						sum = 0;
						// k+=1;
						continue;
					}
					for (int l = 0; l < n; ++l)
					{
						sum += d[l];
						if (sum>=y){
							sum = 0;
							// l+=1;
							continue;
						}
						for (int m = 0; m < n; ++m)
						{
							sum += e[m];
							if (sum>=y){
								sum = 0;
								// m+=1;
								continue;
							}
							for (int t = 0; t < n; ++t)
							{
								sum += f[t];
								if (sum <= y && sum >= x)
								{
									total += 1;
									sum = 0;
								}
							}
						}
					}
				}
			}
		}
	}

	printf("%lld\n", total);
	return 0;
}
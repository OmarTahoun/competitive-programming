#include <bits/stdc++.h>
using namespace std;

int main(){
	int r1,r2,c1,c2,d1,d2;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;

	for (int a = 1; a < 10; ++a){
		int b = r1-a;
		int c = c1-a;
		int d = r2-c;

		if (a<10 && a>0 && b<10 && b>0 && c<10 && c>0 && d<10 && d>0)
			if (a+b == r1 && c+d == r2 && a+c == c1 && b+d == c2 && a+d == d1 && b+c == d2){
				set<int>stones;
				stones.insert(a);
				stones.insert(b);
				stones.insert(c);
				stones.insert(d);

				if (stones.size() == 4){
					cout<<a<<" "<<b<<"\n"<<c<<" "<<d<<endl;
					return 0;
				}
			}
	}

	cout<<-1<<endl;
	return 0;
}
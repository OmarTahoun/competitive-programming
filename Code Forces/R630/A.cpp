#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, t;
long long x, y, x1, y_1, x2, y2;

int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;
		cin>>x>>y>>x1>>y_1>>x2>>y2;

		while(true){
			if(a == 0 && b == 0 && c == 0 && d == 0){
				cout<<"Yes"<<endl;
				break;
			}

			if(x-a >= x1 && x-a <= x2){
				a--;
				x--;
			}
			else if(x+b >= x1 && x+b <= x2){
				b--;
				x++;
			}
			else{
				cout<<"No"<<endl;
				break;
			}


			if(y-c >= y_1 && y-c <= y2){
				c--;
				y--;
			}
			else if(y+d >= y_1 && y+d <= y2){
				d--;
				y++;
			}
			else{
				cout<<"No"<<endl;
				break;
			}
		}
	}


	return 0;
}
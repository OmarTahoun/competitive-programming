#include <iostream>

using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np, drink_toasts, lime_toasts, salt_toasts;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	drink_toasts = (k*l)/nl;
	lime_toasts = c*d;
	salt_toasts = p/np;
	cout<<min(drink_toasts, min(lime_toasts,salt_toasts))/n<<endl;
	return 0;
}
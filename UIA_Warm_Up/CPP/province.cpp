#include <iostream>
using namespace std;

int main(){
	int g,s,c, total;
	cin>>g>>s>>c;
	total = g*3 + s*2 + c*1;
	string vic = "";
	if (total>=8)
		vic = "Province or ";
	else if (total>=5)
		vic = "Duchy or ";
	else if (total>=2)
		vic = "Estate or ";
	else
		vic = "";
	if (total>=6)
		vic+="Gold";
	else if(total>=3)
		vic+="Silver";
	else
		vic+="Copper";


	cout<<vic<<endl;
	return 0;
}
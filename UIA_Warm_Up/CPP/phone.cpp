#include <iostream>
#include <string>
#include <stdlib.h> 
#include <cmath>
using namespace std;

int main(){
	string password;
	cout<<"Enter the password: ";
	cin>>password;

	while(password != "omar"){
		cout<<"\n\nIncorrect Password hint ==> (the password is my name)\nEnter the password: ";
		cin>>password;
	}

	string s = "0";
	int first = rand() % 2+ 1;
	
	if (first == 1){
		s+=to_string(first);
		s+=to_string(rand() % 6 + 6);
	}else{
		first = pow(first,4);
		s += to_string(first);
	}

	int second = rand()%20+10;
	second += 20-second;
	second = second*(second/2) + 7;
	s += to_string(second);

	string b = "2";
	int total = 2;

	for (int r = 2; r <=8; ++r)
	{
		if ( r==2 || r == 3){
			total += r;
			b += to_string(r);
		}
		if (r==7){
			total += r;
			b += to_string(r);
			break;
		}
	}
	s += b;

	cout<<"\n\nCongratulations you cracked it!!\nContact this number to claim your prize: ";
	cout<<s<<endl;
	return 0;
	system("pause");
}
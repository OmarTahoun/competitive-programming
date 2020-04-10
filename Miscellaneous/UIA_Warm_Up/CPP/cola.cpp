#include<iostream>
#include<string>
using namespace std;

int main(){
int n;
string names[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
cin>>n;
n-=1;
while(n>=5){
	n = (n-5)/2;
}

cout<<names[n];
return 0;
}

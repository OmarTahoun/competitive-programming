#include <iostream>
using namespace std;
int main(){
	int x1, y1, x2, y2, distance_x, distance_y;
	
	cin>>x1>>y1>>x2>>y2;

	distance_x = abs(x2-x1);
	distance_y = abs(y2-y1);

	int a, b;
	cin>>a>>b;

	int steps_x = distance_x / a, steps_y = distance_y / b;
	if (distance_x%a == 0 && distance_y%b == 0 && abs(steps_x-steps_y) % 2 == 0)
	{
		cout << "YES";
		return 0;
	}

	cout<<"NO";
	return 0;
}
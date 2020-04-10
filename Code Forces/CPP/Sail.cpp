#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	long long sx, sy, ex, ey, distance, tmpx,tmpy, tmpdist;
	cin>>t>>sx>>sy>>ex>>ey;
	string wind;
	cin>>wind;
	distance = abs(sx-ex) + abs(sy-ey);

	int i = 0;
	for (i; i < t && (sx!= ex || sy!=ey); ++i){
		tmpx = sx;
		tmpy = sy;
		if(wind[i] == 'S')
			tmpy--;
		if(wind[i] == 'W')
			tmpx--;
		if(wind[i] == 'E')
			tmpx++;
		if(wind[i] == 'N')
			tmpy++;

		tmpdist = abs(tmpx-ex) + abs(tmpy-ey);
		if (tmpdist<=distance){
			sx = tmpx;
			sy = tmpy;
			distance = tmpdist;
		}
	}
	if(sx == ex && sy == ey)
		cout<<i<<endl;
	else
		cout<<-1<<endl;

	return 0;
}
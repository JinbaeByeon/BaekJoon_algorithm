#include <iostream>
#include <math.h>
using namespace std;

struct Circle{
	int x;
	int y;
	int r;
};

int Check(Circle c1, Circle c2)
{
	double dist = sqrt((c1.x - c2.x)*(c1.x - c2.x) + (c1.y - c2.y)*(c1.y - c2.y));
	if (dist == 0 && c1.r == c2.r)
		return -1;
	else if (dist == c1.r + c2.r || dist == c1.r - c2.r || dist == c2.r - c1.r)
		return 1;
	else if (dist > c1.r + c2.r || dist < (c1.r > c2.r ? c1.r - c2.r : c2.r - c1.r))
		return 0;
	else
		return 2;
}

int main()
{
	Circle Jo, Back;
	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> Jo.x >> Jo.y >> Jo.r >> Back.x >> Back.y >> Back.r;
		cout << Check(Jo, Back) << endl;
	}
}
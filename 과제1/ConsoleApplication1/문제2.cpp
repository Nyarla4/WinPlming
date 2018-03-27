#include<iostream>
#include<cmath>
#include"¹®Á¦2.h"
using namespace std;

CMyPoint::CMyPoint()
{
	x = 0; y = 0;
}
CMyPoint::CMyPoint(int ix, int iy)
{
	x = ix; y = iy;
}
void CMyPoint::print()
{
	cout << "(" << x << "," << y << ")\n";
}
float CMyPoint::distance(CMyPoint a)
{
	float x_ = (float)x - (float)a.x;
	float y_ = (float)y - (float)a.y;
	x_ = pow(x_, 2);
	y_ = pow(y_, 2);
	return sqrtf(x_ + y_);
}
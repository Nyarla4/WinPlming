#include<iostream>
#include"¹®Á¦4.h"
using namespace std;
CMyShape::CMyShape() {}
CMyShape::CMyShape(int ix, int iy)
{
	x = ix; y = iy;
}
void CMyShape::draw()
{
	cout << "[MyShape] (" << x << "," << y << ")\n";
}
CMyRect::CMyRect(int ix, int iy, int iw, int ih)
{
	x = ix; y = iy;
	w = iw; h = ih;
}
void CMyRect::draw()
{
	cout << "[MyRect] (" << x << "," << y << ") w:" << w << " h:" << h << endl;
}
CMyCircle::CMyCircle(int ix, int iy, int ir)
{
	x = ix; y = iy;
	r = ir;
}
void CMyCircle::draw()
{
	cout << "[MyCircle] (" << x << "," << y << ") r:" << r << endl;
}
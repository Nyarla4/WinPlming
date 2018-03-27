#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class CMyPoint
{
public:
	int x;
	int y;
	CMyPoint();
	CMyPoint(int ix, int iy);
	void print();
	float distance(CMyPoint a);
};
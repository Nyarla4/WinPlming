#pragma once
#include<iostream>
using namespace std;
class CMyShape
{
public:
	int x = 0;
	int y = 0;
	CMyShape();
	CMyShape(int ix, int iy);
	virtual void draw();
};
class CMyRect :public CMyShape
{
public:
	int w = 0;
	int h = 0;
	CMyRect(int ix, int iy, int iw, int ih);
	void draw();
};

class CMyCircle :public CMyShape
{
public:
	int r = 0;
	CMyCircle(int ix, int iy, int ir);
	void draw();
};
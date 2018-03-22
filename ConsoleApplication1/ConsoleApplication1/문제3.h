#pragma once
#include<iostream>
using namespace std;
class CMyTime
{
public:
	int hour = 0;
	int minute = 0;
	int second = 0;
	CMyTime(int h, int m, int s);
	void print();
	void add(CMyTime a);

};
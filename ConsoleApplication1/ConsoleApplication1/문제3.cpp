#include<iostream>
#include"문제3.h"
using namespace std;

CMyTime::CMyTime(int h, int m, int s)
{
	hour = h; minute = m; second = s;
	if (second >= 60)
	{
		while (second>=60)
		{
			second -= 60;
			minute += 1;
		}
	}
	if (minute >= 60)
	{
		while (minute >= 60)
		{
			minute -= 60;
			hour += 1;
		}
	}
}
//수정필요
void CMyTime::print()
{
	if (hour < 10)
	{
		if (minute < 10)
		{
			if (second < 10)
			{
				cout << "0" << hour << ":" << "0" << minute << ":" << "0" << second;
			}
			else
			{
				cout << "0" << hour << ":" << "0" << minute << ":" << second;
			}
		}
		else
		{
			if (second < 10)
			{
				cout << "0" << hour << ":" << minute << ":" << "0" << second;
			}
			else
			{
				cout << "0" << hour << ":" << minute << ":" << second;
			}
		}
	}
	else
	{
		if (minute < 10)
		{
			if (second < 10)
			{
				cout << hour << ":" << "0" << minute << ":" << "0" << second;
			}
			else
			{
				cout << hour << ":" << "0" << minute << ":" << second;
			}
		}
		else
		{
			if (second < 10)
			{
				cout << hour << ":" << minute << ":" << "0" << second;
			}
			else
			{
				cout << hour << ":" << minute << ":" << second;
			}
		}
	}
	cout << endl;
}
void CMyTime::add(CMyTime a)
{
	hour += a.hour;
	minute += a.minute;
	second += a.second;
	if (second >= 60)
	{
		while (second>=60)
		{
			second -= 60;
			minute += 1;
		}
	}
	if (minute >= 60)
	{
		while (minute >= 60)
		{
			minute -= 60;
			hour += 1;
		}
	}
}
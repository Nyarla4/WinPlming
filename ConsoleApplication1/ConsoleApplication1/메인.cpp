#include<iostream>
#include <string>
#include<cmath>
#include"����1.h"
#include"����2.h"
#include"����3.h"
#include"����4.h"
int main(void)
{
	int sel = 0;
	//1�� ����
	CStudent a1[3];
	//2�� ����
	CMyPoint a2(4, 5);
	CMyPoint b2(1, 1);
	//3�� ����
	CMyTime a3(0, 70, 90);
	CMyTime b3(0, 0, 3630);
	//4�� ����
	CMyShape * pShape1 = new CMyShape(10, 3);
	CMyShape * pShape2 = new CMyRect(3, 5, 7, 8);
	CMyShape * pShape3 = new CMyCircle(4, 5, 1);
	while (1)
	{
		cin >> sel;
		switch (sel)
		{
		case 1:
			for (int i = 0; i < 3; i++)
			{
				cin >> a1[i].name_ >> a1[i].ID_ >> a1[i].major_ >> a1[i].grade_;
			}
			for (int i = 0; i < 3; i++)
			{
				a1[i].ShowData();
			}
			break;
		case 2:
			a2.print();
			b2.print();
			cout << "a �� b�� �Ÿ� : " << a2.distance(b2) << endl;
			break;
		case 3:
			a3.print();
			b3.print();
			a3.add(b3);
			a3.print();
			break;
		case 4:
			pShape1->draw();
			pShape2->draw();
			pShape3->draw();
			delete pShape1;
			delete pShape2;
			delete pShape3;
			break;
		case 5:
			return 0;
		default:
			break;
		}

	}	
}
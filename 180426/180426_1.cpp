#include <iostream>
using namespace std;
/*struct List
{
	int id;
	List *p;//구조체 본인을 가리키는 포인터 가능
};

void main()
{
	//1번예시
	List item;
	item.id = 20;
	item.p = &item;
	cout << "item.id: " << item.id << "\n";
	cout << "item.p->id: " << item.p->id << "\n";
	cout << "item.p->p->id: " << item.p->p->id << "\n";
	//2번예시
	List a, b, c;
	a.id = 1; a.p = &b;
	b.id = 2; b.p = &c;
	c.id = 3; c.p = &a;
	cout << "a.id: " << a.id << "\n";
	cout << "b.id: " << a.p->id << "\n";
	cout << "c.id: " << a.p->p->id << "\n";
}*/
struct Node
{
	int value;
	Node *p;
};

int main()
{
	Node a, b, c, d;
	a.value = 10;	a.p = &b;
	b.value = 20;	b.p = &c;
	c.value = 30;	c.p = &d;
	d.value = 40;	d.p = NULL;
	//본인코드
	/*while (1)
	{
		cout << a.value << endl;
		if (a.p == NULL)
			break;
		a.value = a.p->value;
		a.p = a.p->p;
	}*/
	//교수님코드
	/*Node *ppp = &a;
	while (ppp != NULL)
	{
		//if (ppp->value == 20):건너뛰기
		//	ppp = ppp->p;
		cout << ppp->value << endl;
		ppp = ppp->p;
	}*/
}
/*
Liked list
	시작: 지정해서 가리킴
	마지막: NULL을 가리킴
	장점:데이터 삽입에 용이
*/
/*
템플릿
	사용예	
		template <typename T>
	CList
		정의방법
			CList <datatype> a;
			예시:	CList <int> a;
		데이터 추가:
			CList::AddTail(..)
			CList::AddHead(..)
*/
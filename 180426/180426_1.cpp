#include <iostream>
using namespace std;
/*struct List
{
	int id;
	List *p;//����ü ������ ����Ű�� ������ ����
};

void main()
{
	//1������
	List item;
	item.id = 20;
	item.p = &item;
	cout << "item.id: " << item.id << "\n";
	cout << "item.p->id: " << item.p->id << "\n";
	cout << "item.p->p->id: " << item.p->p->id << "\n";
	//2������
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
	//�����ڵ�
	/*while (1)
	{
		cout << a.value << endl;
		if (a.p == NULL)
			break;
		a.value = a.p->value;
		a.p = a.p->p;
	}*/
	//�������ڵ�
	/*Node *ppp = &a;
	while (ppp != NULL)
	{
		//if (ppp->value == 20):�ǳʶٱ�
		//	ppp = ppp->p;
		cout << ppp->value << endl;
		ppp = ppp->p;
	}*/
}
/*
Liked list
	����: �����ؼ� ����Ŵ
	������: NULL�� ����Ŵ
	����:������ ���Կ� ����
*/
/*
���ø�
	��뿹	
		template <typename T>
	CList
		���ǹ��
			CList <datatype> a;
			����:	CList <int> a;
		������ �߰�:
			CList::AddTail(..)
			CList::AddHead(..)
*/
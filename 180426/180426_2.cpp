#include <afxtempl.h>//���ø� ��뿡 �ʿ�(CList, CVector, CMap)
int main()
{
	CList <int> a;
	a.AddTail(10);
	a.AddTail(20);
	a.AddTail(30);
	POSITION pos = a.GetHeadPosition(); // ù ������ ��ġ ��ȯ
	while (pos != NULL)
	{
		int value = a.GetNext(pos); // pos ��ġ�� ������ ��ȯ ��,
									// pos�� list���� ���� ��ġ�� ��Ŵ

	}
	/*
	CList::RemoveAt(POSITION);
		Ư�� ��ġ ����
	*/
}
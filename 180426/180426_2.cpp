#include <afxtempl.h>//템플릿 사용에 필요(CList, CVector, CMap)
int main()
{
	CList <int> a;
	a.AddTail(10);
	a.AddTail(20);
	a.AddTail(30);
	POSITION pos = a.GetHeadPosition(); // 첫 데이터 위치 반환
	while (pos != NULL)
	{
		int value = a.GetNext(pos); // pos 위치의 데이터 반환 후,
									// pos는 list에서 다음 위치를 가킴

	}
	/*
	CList::RemoveAt(POSITION);
		특정 위치 제거
	*/
}
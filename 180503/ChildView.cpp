
// ChildView.cpp : CChildView Ŭ������ ����
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "ChildView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
	buttonDown = false;
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
//	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
//	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()



// CChildView �޽��� ó����

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this);

	POSITION p = dot.GetHeadPosition();//���� ��ġ ��������
	while (p != NULL)
	{
		CPoint pt = dot.GetAt(p);//�ش� ��ġ ��������
		dc.SetPixelV(pt, RGB(0, 255, 255));//�۾Ƽ� �� �Ⱥ��δٸ�
		//dc.SelectStockObject(BLACK_BRUSH);
		//dc.Rectangle(pt.x, pt.y, pt.x + 10, pt.y + 10);	//�� �ص� ������

		dot.GetNext(p);//�������� �Ѿ��
	}
	if (buttonDown)
	{
		dc.Rectangle(sq_st.x, sq_st.y, sq_ed.x, sq_ed.y);

	}
}

//void CChildView::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
//
//	CWnd::OnLButtonDown(nFlags, point);
//}

void CChildView::OnMouseMove(UINT nFlags, CPoint point)
{
	if (nFlags == MK_LBUTTON)//�� ���콺 Ŭ���Ǵ� ����
	{
		dot.AddTail(point);
		Invalidate();
	}
	else if (nFlags == MK_RBUTTON)//Ȥ�� if(buttonDown)
	{
		sq_ed = point;
		Invalidate();
	}
	CWnd::OnMouseMove(nFlags, point);
}

//void CChildView::OnLButtonUp(UINT nFlags, CPoint point)
//{
//	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
//
//	CWnd::OnLButtonUp(nFlags, point);
//}

void CChildView::OnRButtonDown(UINT nFlags, CPoint point)
{
	sq_st = point;
	sq_ed = point;
	buttonDown = true;
	CWnd::OnRButtonDown(nFlags, point);
}


void CChildView::OnRButtonUp(UINT nFlags, CPoint point)
{
	sq_ed = point;
	buttonDown = false;
	POSITION p = dot.GetHeadPosition();//���� ��ġ ��������
	while (p != NULL)
	{
		POSITION cur = p;//����
		CPoint pt = dot.GetAt(p);//�ش� ��ġ ��������
		dot.GetNext(p);//�������� �Ѿ��
		if (sq_st.x < pt.x && pt.x < sq_ed.x && sq_st.y < pt.y && pt.y < sq_ed.y)
		{
			dot.RemoveAt(cur);
		}
	}
	Invalidate();
	CWnd::OnRButtonUp(nFlags, point);
}
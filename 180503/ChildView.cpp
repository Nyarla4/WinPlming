
// ChildView.cpp : CChildView 클래스의 구현
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



// CChildView 메시지 처리기

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

	POSITION p = dot.GetHeadPosition();//시작 위치 가져오기
	while (p != NULL)
	{
		CPoint pt = dot.GetAt(p);//해당 위치 가져오기
		dc.SetPixelV(pt, RGB(0, 255, 255));//작아서 잘 안보인다면
		//dc.SelectStockObject(BLACK_BRUSH);
		//dc.Rectangle(pt.x, pt.y, pt.x + 10, pt.y + 10);	//로 해도 괜찮다

		dot.GetNext(p);//다음으로 넘어가기
	}
	if (buttonDown)
	{
		dc.Rectangle(sq_st.x, sq_st.y, sq_ed.x, sq_ed.y);

	}
}

//void CChildView::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
//
//	CWnd::OnLButtonDown(nFlags, point);
//}

void CChildView::OnMouseMove(UINT nFlags, CPoint point)
{
	if (nFlags == MK_LBUTTON)//왼 마우스 클릭되는 동안
	{
		dot.AddTail(point);
		Invalidate();
	}
	else if (nFlags == MK_RBUTTON)//혹은 if(buttonDown)
	{
		sq_ed = point;
		Invalidate();
	}
	CWnd::OnMouseMove(nFlags, point);
}

//void CChildView::OnLButtonUp(UINT nFlags, CPoint point)
//{
//	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
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
	POSITION p = dot.GetHeadPosition();//시작 위치 가져오기
	while (p != NULL)
	{
		POSITION cur = p;//현재
		CPoint pt = dot.GetAt(p);//해당 위치 가져오기
		dot.GetNext(p);//다음으로 넘어가기
		if (sq_st.x < pt.x && pt.x < sq_ed.x && sq_st.y < pt.y && pt.y < sq_ed.y)
		{
			dot.RemoveAt(cur);
		}
	}
	Invalidate();
	CWnd::OnRButtonUp(nFlags, point);
}
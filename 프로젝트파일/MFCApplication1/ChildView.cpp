
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
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
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
	CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.
	
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	/*for (int i = 0;i<100;i+=10)
	{
	dc.Rectangle(100+i, 100+i, 2000-i, 2000-i);
	}*/
	/*for (int i = 0;i<255;i++)
	{
		for (int j = 0;j < 255;j++)
		{
			if ((i - 127)*(i - 127) + (j - 127)*(j - 127) < 127 * 127)
			{
				dc.SetPixel(i, j, RGB(j,  i, i));
			}
		}
	}*/
	/*CRect rect;//오버로딩된 함수
	GetClientRect(rect);
	dc.Ellipse(rect);//창에 맞는 크기의 타원
	dc.MoveTo(300, 400);//선 시작
	dc.LineTo(100, 100);//이전위치에서 100,100으로 선 긋기	dc.LineTo(200, 200);
	dc.LineTo(0, 00);*/
}



void CChildView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CClientDC dc(this);
	/*for (int i = 0;i<100;i+=10)
	{
		dc.Ellipse(10+i, 10+i, 200-i, 200-i);
	}*/
	//dc.SetPixelV(point.x, point.y, RGB(0, 0, 255));
}


void CChildView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	/*CClientDC dc(this);
	dc.Rectangle(point.x,point.y,point.x+10,point.y+10);*/
}

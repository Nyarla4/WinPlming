
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
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
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
	CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.
	
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
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
	/*CRect rect;//�����ε��� �Լ�
	GetClientRect(rect);
	dc.Ellipse(rect);//â�� �´� ũ���� Ÿ��
	dc.MoveTo(300, 400);//�� ����
	dc.LineTo(100, 100);//������ġ���� 100,100���� �� �߱�	dc.LineTo(200, 200);
	dc.LineTo(0, 00);*/
}



void CChildView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	CClientDC dc(this);
	/*for (int i = 0;i<100;i+=10)
	{
		dc.Ellipse(10+i, 10+i, 200-i, 200-i);
	}*/
	//dc.SetPixelV(point.x, point.y, RGB(0, 0, 255));
}


void CChildView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	/*CClientDC dc(this);
	dc.Rectangle(point.x,point.y,point.x+10,point.y+10);*/
}

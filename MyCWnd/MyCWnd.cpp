#include "MyCWnd.h"

C_BBA_Wnd::C_BBA_Wnd()
{
	CString strWndClass = AfxRegisterWndClass(CS_DBLCLKS, AfxGetApp()->LoadStandardCursor(IDC_ARROW), (HBRUSH)(COLOR_3DFACE + 1), AfxGetApp()->LoadStandardIcon(IDI_WINLOGO));

	CRect rect(0,0,100,100);

	CreateEx(NULL, strWndClass, TEXT("BBA"),
		WS_OVERLAPPED | WS_SYSMENU | WS_CAPTION | WS_MINIMIZEBOX,
		CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
		NULL, NULL);

}

C_BBA_Wnd::~C_BBA_Wnd()
{
	DestroyWindow();
}

LRESULT C_BBA_Wnd::OnMyMessage(WPARAM wParam, LPARAM lParam)
{
	MessageBox(NULL, TEXT("OnServerMsg"), 0);
	return 0;
}


BEGIN_MESSAGE_MAP(C_BBA_Wnd, CWnd)
	ON_MESSAGE(WM_MY_MESSAGE, OnMyMessage)
END_MESSAGE_MAP()
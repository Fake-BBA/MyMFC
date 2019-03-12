#pragma once
#include <afxwin.h>

//´°¿ÚÀà
class C_BBA_Wnd : public CWnd
{
public:
	C_BBA_Wnd();
	~C_BBA_Wnd();
protected:
	DECLARE_MESSAGE_MAP();

public:
	afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);
};

#define WM_MY_MESSAGE 1080
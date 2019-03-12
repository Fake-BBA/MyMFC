#include "MyApp.h"
#include "MyCWnd.h"

#include <Windows.h>
//实现类中的函数
C_BBA_App::~C_BBA_App()
{
	if (m_pMainWnd)
		delete m_pMainWnd;
}

BOOL C_BBA_App::InitInstance(void)	//程序入口点，WinMain会调用
{
	C_BBA_Wnd *p_C_BBA_Wnd=new C_BBA_Wnd();
	if (m_pMainWnd == NULL)
		m_pMainWnd = p_C_BBA_Wnd;

	m_pMainWnd->ShowWindow(this->m_nCmdShow);
	m_pMainWnd->UpdateWindow();//重绘窗口	
	
	::PostMessage(p_C_BBA_Wnd->m_hWnd, WM_MY_MESSAGE, 0, 0);
	return TRUE;
};

C_BBA_App myapp;
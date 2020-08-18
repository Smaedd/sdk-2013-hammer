#include "stdafx.h"
// TemplateDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TemplateDlg.h"
#include "afxdialogex.h"
#include "ToolManager.h"


// CTemplateDlg dialog

IMPLEMENT_DYNAMIC(CTemplateDlg, CDialogEx)

CTemplateDlg::CTemplateDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TEMPLATE, pParent)
{

}

CTemplateDlg::~CTemplateDlg()
{
}

void CTemplateDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTemplateDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CTemplateDlg::OnBnClickedOk)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// CTemplateDlg message handlers


void CTemplateDlg::OnBnClickedOk()
{
	// set the tool pointer as default tool
	ToolManager()->SetTool(TOOL_POINTER);

	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}

void CTemplateDlg::OnClose()
{
	// set the tool pointer as default tool
	ToolManager()->SetTool(TOOL_POINTER);
}

#pragma once

#include "resource.h"
#include "afxdialogex.h"

// CTemplateDlg dialog

class CTemplateDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CTemplateDlg)

public:
	CTemplateDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CTemplateDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEMPLATE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

	afx_msg void OnClose(void);
public:
	afx_msg void OnBnClickedOk();
};

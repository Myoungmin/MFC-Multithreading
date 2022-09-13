
// MFC-MultithreadingDlg.h : header file
//

#pragma once


// CMFCMultithreadingDlg dialog
class CMFCMultithreadingDlg : public CDialogEx
{
// Construction
public:
	CMFCMultithreadingDlg(CWnd* pParent = nullptr);	// standard constructor
	afx_msg void OnBnClickedButtonStart();
	afx_msg void OnBnClickedButtonStop();

	int currValue;
	int maxValue;
	BOOL stopNow;

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCMULTITHREADING_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};

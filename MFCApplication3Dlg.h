
// MFCApplication3Dlg.h : ��� ����
//

#pragma once
#include "afxwin.h"


// CMFCApplication3Dlg ��ȭ ����
class CMFCApplication3Dlg : public CDialogEx
{
// �����Դϴ�.
public:
	CMFCApplication3Dlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION3_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// ������ �ΰ��� �Ǽ��� ������ var[2]���� ����.
	float var[2];
	// �����ڸ� ������ opr ����.
	char opr;
	// ���� Edit Control�� String������ �����ϱ� ���� disp_number ����
	CString disp_number = "";
	// = ��ư
	CButton btn1;
	// ���ڸ� ǥ���� �� Edit Control 1
	CEdit edit1;

	// number btn
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton13();
	
	// operator btn
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton14();

	// Equal btn
	afx_msg void OnBnClickedButton15();
	// Clear btn
	afx_msg void OnBnClickedButton16();

	afx_msg void OnBnClickedCancel();
};

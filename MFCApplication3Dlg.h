
// MFCApplication3Dlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"


// CMFCApplication3Dlg 대화 상자
class CMFCApplication3Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCApplication3Dlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION3_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// 연산할 두개의 실수형 변수를 var[2]에다 저장.
	float var[2];
	// 연산자를 저장할 opr 변수.
	char opr;
	// 계산기 Edit Control에 String형으로 저장하기 위한 disp_number 변수
	CString disp_number = "";
	// = 버튼
	CButton btn1;
	// 숫자를 표시해 줄 Edit Control 1
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

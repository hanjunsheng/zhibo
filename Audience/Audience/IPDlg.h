#pragma once
#include "afxcmn.h"


// CIPDlg �Ի���

class CIPDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CIPDlg)

public:
	CIPDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CIPDlg();

// �Ի�������
	enum { IDD = IDD_IPDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CIPAddressCtrl m_serveripaddress;
	virtual void OnOK();
	virtual void OnCancel();
};
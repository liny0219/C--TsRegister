
// MFCApplicationDlg.h : ͷ�ļ�
//

#pragma once


// CMFCApplicationDlg �Ի���
class CMFCApplicationDlg : public CDialogEx
{
// ����
public:
	CMFCApplicationDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFCAPPLICATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
//	CString m_descode;
//	CString m_srccode;
	afx_msg void OnBnClickedOk();
};

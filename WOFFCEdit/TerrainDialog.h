//#pragma once
//#include "afxdialogex.h"

#pragma once
#include "afxdialogex.h"
#include "resource.h"
#include "afxwin.h"
#include "SceneObject.h"
#include "InputCommands.h"
#include <vector>

// TerrainDialog dialog

class TerrainDialog : public CDialogEx
{
	DECLARE_DYNAMIC(TerrainDialog)

public:
	TerrainDialog(CWnd* pParent = nullptr);   // standard constructor
	virtual ~TerrainDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnNMCustomdrawSlider6(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnNMCustomdrawSlider7(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnNMCustomdrawSlider8(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedButton3();
	float GetFloatPos(CSliderCtrl m_slider);
	float GetFloatPos8();

	//void DoDataExchange(CDataExchange* pDX);
	//bool OnInitDialog();

	InputCommands m_InputCommands;

	CSliderCtrl m_slider6;
	CSliderCtrl m_slider7;
	CSliderCtrl m_slider8;

};

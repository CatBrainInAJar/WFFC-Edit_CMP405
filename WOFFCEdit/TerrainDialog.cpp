// TerrainDialog.cpp : implementation file
//


#include "stdafx.h"

#include "pch.h"
#include "afxdialogex.h"
#include "TerrainDialog.h"


// TerrainDialog dialog

IMPLEMENT_DYNAMIC(TerrainDialog, CDialogEx)

TerrainDialog::TerrainDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{
	CDialogEx::OnInitDialog();

	// Initialize slider range
	m_slider6.SetRange(0, 100);      // Set integer range
	m_slider6.SetTicFreq(10);        // Optional: tic marks every 10 units
	m_slider6.SetPos(50);            // Optional: initial thumb position
	
	// Initialize slider range
	m_slider7.SetRange(0, 100);      // Set integer range
	m_slider7.SetTicFreq(10);        // Optional: tic marks every 10 units
	m_slider7.SetPos(50);            // Optional: initial thumb position
	
	// Initialize slider range
	m_slider8.SetRange(-1, 1);      // Set integer range
	m_slider8.SetTicFreq(10);        // Optional: tic marks every 10 units
	m_slider8.SetPos(1);            // Optional: initial thumb position

}

TerrainDialog::~TerrainDialog()
{
}

void TerrainDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SLIDER6, m_slider6);
	DDX_Control(pDX, IDC_SLIDER7, m_slider7);
	DDX_Control(pDX, IDC_SLIDER8, m_slider8);
}


BEGIN_MESSAGE_MAP(TerrainDialog, CDialogEx)
	ON_BN_CLICKED(IDC_CHECK1, &TerrainDialog::OnBnClickedCheck1)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER6, &TerrainDialog::OnNMCustomdrawSlider6)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER7, &TerrainDialog::OnNMCustomdrawSlider7)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER8, &TerrainDialog::OnNMCustomdrawSlider8)
	ON_BN_CLICKED(IDC_BUTTON3, &TerrainDialog::OnBnClickedButton3)
END_MESSAGE_MAP()


// TerrainDialog message handlers

void TerrainDialog::OnBnClickedCheck1()
{
	// TODO: Add your control notification handler code here
}

void TerrainDialog::OnNMCustomdrawSlider6(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	m_InputCommands.innerBrushRadius;// = pResult;


	*pResult = 0;
}

void TerrainDialog::OnNMCustomdrawSlider7(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	m_InputCommands.outerBrushRadius;// = pResult;

	*pResult = 0;
}

void TerrainDialog::OnNMCustomdrawSlider8(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here



	if (pNMCD->dwDrawStage == CDDS_ITEMPREPAINT)
	{
		//float value = GetFloatPos(m_slider8);
		float value = GetFloatPos8();
		// Use `value` as needed

		*pResult = CDRF_DODEFAULT;
	}


	//m_InputCommands.terrainDir;
	//IDC_SLIDER8;


	//DoDataExchange(CDataExchange* pDX)
	//CDialogEx::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_SLIDER8, m_slider);  // Link control ID to m_slider

	*pResult = 0;
}

void TerrainDialog::OnBnClickedButton3()
{
	// TODO: Add your control notification handler code here

	if (m_InputCommands.EditModeON_terrain == 0) {
		m_InputCommands.EditModeON_terrain ==1;
	}
	if (m_InputCommands.EditModeON_terrain == 1) {
		m_InputCommands.EditModeON_terrain ==0;
	}

}

float TerrainDialog::GetFloatPos(CSliderCtrl m_slider) {

	int intPos = m_slider.GetPos();        // Get the current integer position
	int min = m_slider.GetRangeMin();      // Get min value (usually 0)
	int max = m_slider.GetRangeMax();      // Get max value (e.g., 100)

	if (max == min) return 0.0f; // Prevent divide by zero

	// Scale the integer position to a float value between 0.0 and 1.0
	float floatPos = static_cast<float>(intPos - min) / static_cast<float>(max - min);

	return floatPos;
}



float TerrainDialog::GetFloatPos8( ) {

	int intPos = m_slider8.GetPos();        // Get the current integer position
	int min = m_slider8.GetRangeMin();      // Get min value (usually 0)
	int max = m_slider8.GetRangeMax();      // Get max value (e.g., 100)

	if (max == min) return 0.0f; // Prevent divide by zero

	// Scale the integer position to a float value between 0.0 and 1.0
	float floatPos = static_cast<float>(intPos - min) / static_cast<float>(max - min);

	return floatPos;
}



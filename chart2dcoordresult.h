#if !defined(AFX_CHART2DCOORDRESULT_H__12DF2527_6AF6_11D4_AC53_444553546170__INCLUDED_)
#define AFX_CHART2DCOORDRESULT_H__12DF2527_6AF6_11D4_AC53_444553546170__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CChart2DCoordResult wrapper class

class CChart2DCoordResult : public COleDispatchDriver
{
public:
	CChart2DCoordResult() {}		// Calls COleDispatchDriver default constructor
	CChart2DCoordResult(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CChart2DCoordResult(const CChart2DCoordResult& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetX();
	void SetX(long);
	long GetY();
	void SetY(long);

// Operations
public:
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHART2DCOORDRESULT_H__12DF2527_6AF6_11D4_AC53_444553546170__INCLUDED_)

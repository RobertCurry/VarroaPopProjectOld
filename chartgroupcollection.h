#if !defined(AFX_CHARTGROUPCOLLECTION_H__12DF2538_6AF6_11D4_AC53_444553546170__INCLUDED_)
#define AFX_CHARTGROUPCOLLECTION_H__12DF2538_6AF6_11D4_AC53_444553546170__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CChartGroup;

/////////////////////////////////////////////////////////////////////////////
// CChartGroupCollection wrapper class

class CChartGroupCollection : public COleDispatchDriver
{
public:
	CChartGroupCollection() {}		// Calls COleDispatchDriver default constructor
	CChartGroupCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CChartGroupCollection(const CChartGroupCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetCount();
	LPDISPATCH GetParent();

// Operations
public:
	CChartGroup GetItem(const VARIANT& Index);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHARTGROUPCOLLECTION_H__12DF2538_6AF6_11D4_AC53_444553546170__INCLUDED_)
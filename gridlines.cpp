// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "gridlines.h"

// Dispatch interfaces referenced by this interface
#include "deriveddouble.h"
#include "linestyle.h"


/////////////////////////////////////////////////////////////////////////////
// CGridLines properties

BOOL CGridLines::GetIsStyleDefault()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void CGridLines::SetIsStyleDefault(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

CDerivedDouble CGridLines::GetSpacing()
{
	LPDISPATCH pDispatch;
	GetProperty(0x2, VT_DISPATCH, (void*)&pDispatch);
	return CDerivedDouble(pDispatch);
}

CLineStyle CGridLines::GetStyle()
{
	LPDISPATCH pDispatch;
	GetProperty(0x3, VT_DISPATCH, (void*)&pDispatch);
	return CLineStyle(pDispatch);
}

LPDISPATCH CGridLines::GetParent()
{
	LPDISPATCH result;
	GetProperty(0x4, VT_DISPATCH, (void*)&result);
	return result;
}

/////////////////////////////////////////////////////////////////////////////
// CGridLines operations

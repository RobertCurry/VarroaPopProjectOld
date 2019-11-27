// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "timescale.h"

// Dispatch interfaces referenced by this interface
#include "derivedstring.h"


/////////////////////////////////////////////////////////////////////////////
// CTimeScale properties

long CTimeScale::GetUnit()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CTimeScale::SetUnit(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

CDerivedString CTimeScale::GetFormat()
{
	LPDISPATCH pDispatch;
	GetProperty(0x2, VT_DISPATCH, (void*)&pDispatch);
	return CDerivedString(pDispatch);
}

LPDISPATCH CTimeScale::GetParent()
{
	LPDISPATCH result;
	GetProperty(0x3, VT_DISPATCH, (void*)&result);
	return result;
}

DATE CTimeScale::GetBase()
{
	DATE result;
	GetProperty(0x4, VT_DATE, (void*)&result);
	return result;
}

void CTimeScale::SetBase(DATE propVal)
{
	SetProperty(0x4, VT_DATE, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CTimeScale operations

DATE CTimeScale::ValueToDate(double Value)
{
	DATE result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DATE, (void*)&result, parms,
		Value);
	return result;
}

double CTimeScale::DateToValue(DATE Date)
{
	double result;
	static BYTE parms[] =
		VTS_DATE;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		Date);
	return result;
}

CString CTimeScale::FormatDate(DATE Date, LPCTSTR Format)
{
	CString result;
	static BYTE parms[] =
		VTS_DATE VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Date, Format);
	return result;
}
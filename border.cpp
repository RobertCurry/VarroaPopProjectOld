// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "border.h"


/////////////////////////////////////////////////////////////////////////////
// CBorder properties

long CBorder::GetWidth()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CBorder::SetWidth(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

long CBorder::GetType()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void CBorder::SetType(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

LPDISPATCH CBorder::GetParent()
{
	LPDISPATCH result;
	GetProperty(0x3, VT_DISPATCH, (void*)&result);
	return result;
}

/////////////////////////////////////////////////////////////////////////////
// CBorder operations

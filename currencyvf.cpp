// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "currencyvf.h"

// Dispatch interfaces referenced by this interface
#include "derivedenum.h"
#include "DerivedBoolean.h"


/////////////////////////////////////////////////////////////////////////////
// CCurrencyVF properties

long CCurrencyVF::GetDecimalPlaces()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CCurrencyVF::SetDecimalPlaces(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

BOOL CCurrencyVF::GetUseCurrencySymbol()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void CCurrencyVF::SetUseCurrencySymbol(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

BOOL CCurrencyVF::GetUseSmallCents()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void CCurrencyVF::SetUseSmallCents(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

CDerivedEnum CCurrencyVF::GetOrderCurrencySignValue()
{
	LPDISPATCH pDispatch;
	GetProperty(0x4, VT_DISPATCH, (void*)&pDispatch);
	return CDerivedEnum(pDispatch);
}

void CCurrencyVF::SetOrderCurrencySignValue(LPDISPATCH propVal)
{
	SetProperty(0x4, VT_DISPATCH, propVal);
}

CDerivedBoolean CCurrencyVF::GetSpaceSeparatingSign()
{
	LPDISPATCH pDispatch;
	GetProperty(0x5, VT_DISPATCH, (void*)&pDispatch);
	return CDerivedBoolean(pDispatch);
}

void CCurrencyVF::SetSpaceSeparatingSign(LPDISPATCH propVal)
{
	SetProperty(0x5, VT_DISPATCH, propVal);
}

CDerivedBoolean CCurrencyVF::GetSpaceSeparatingCurrency()
{
	LPDISPATCH pDispatch;
	GetProperty(0x6, VT_DISPATCH, (void*)&pDispatch);
	return CDerivedBoolean(pDispatch);
}

void CCurrencyVF::SetSpaceSeparatingCurrency(LPDISPATCH propVal)
{
	SetProperty(0x6, VT_DISPATCH, propVal);
}

unsigned long CCurrencyVF::GetNegativeValueColor()
{
	unsigned long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void CCurrencyVF::SetNegativeValueColor(unsigned long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

CDerivedBoolean CCurrencyVF::GetUseBrackets()
{
	LPDISPATCH pDispatch;
	GetProperty(0x8, VT_DISPATCH, (void*)&pDispatch);
	return CDerivedBoolean(pDispatch);
}

void CCurrencyVF::SetUseBrackets(LPDISPATCH propVal)
{
	SetProperty(0x8, VT_DISPATCH, propVal);
}

LPDISPATCH CCurrencyVF::GetParent()
{
	LPDISPATCH result;
	GetProperty(0x9, VT_DISPATCH, (void*)&result);
	return result;
}

/////////////////////////////////////////////////////////////////////////////
// CCurrencyVF operations

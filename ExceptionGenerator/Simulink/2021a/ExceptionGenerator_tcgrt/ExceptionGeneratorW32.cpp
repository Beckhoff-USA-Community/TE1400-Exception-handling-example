// ****************** ExceptionGeneratorW32.cpp *************************
// Generated by TE140x-TargetForMatlabSimulink  2.3.1.1
// MATLAB 9.10.0.1710957 (R2021a) Update 4 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.3.1.1
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#include "TcPch.h"
#pragma hdrstop

#include "ExceptionGeneratorCtrl.h"
#include "TcSysW32_i.c"

CComModule _Module;

const   CLSID   IID_ExceptionGeneratorCtrl		=  {0xB3C435F4, 0xA2FD, 0x431E, {0x8C, 0xBB, 0x9D, 0x84, 0xE9, 0xAA, 0xC3, 0x28}};
const   CLSID   LIBID_ExceptionGeneratorW32Lib	=  {0x69227F70, 0xFF97, 0x44DD, {0xB6, 0x39, 0xF3, 0xF2, 0xA9, 0xDD, 0x5E, 0xCD}};
const   CLSID   CLSID_ExceptionGeneratorCtrl   =  {0x0761EFAA, 0xF47D, 0x4D48, {0x98, 0x00, 0x15, 0x2A, 0xB9, 0x9E, 0xE1, 0xB3}};

BEGIN_OBJECT_MAP(ObjectMap)
OBJECT_ENTRY(CLSID_ExceptionGeneratorCtrl, CExceptionGeneratorCtrl)
END_OBJECT_MAP()

/////////////////////////////////////////////////////////////////////////////
// DLL Entry Point

extern "C"
BOOL WINAPI DllMain(HANDLE hInstance, DWORD dwReason, LPVOID /*lpReserved*/)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		_Module.Init(ObjectMap, (HINSTANCE)hInstance);
#ifndef UNDER_CE
		DisableThreadLibraryCalls((HINSTANCE)hInstance);
#endif
	}
	else if (dwReason == DLL_PROCESS_DETACH)
		_Module.Term();
	return TRUE;    // ok
}

/////////////////////////////////////////////////////////////////////////////
// Used to determine whether the DLL can be unloaded by OLE

STDAPI DllCanUnloadNow(void)
{
	return (_Module.GetLockCount()==0) ? S_OK : S_FALSE;
}

/////////////////////////////////////////////////////////////////////////////
// Returns a class factory to create an object of the requested type

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	return _Module.GetClassObject(rclsid, riid, ppv);
}

/////////////////////////////////////////////////////////////////////////////
// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	// registers object, typelib and all interfaces in typelib
	return _Module.RegisterServer(TRUE);
}

/////////////////////////////////////////////////////////////////////////////
// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	_Module.UnregisterServer();
	return S_OK;
}

/////////////////////////////////////////////////////////////////////////////
STDAPI DllGetTcCtrl(ITcCtrl** ppCtrl)
{
	if ( ppCtrl == NULL )
		return E_POINTER;

	CComObject<CExceptionGeneratorCtrl>* pCExceptionGeneratorCtrl = new CComObject<CExceptionGeneratorCtrl>();
	if (pCExceptionGeneratorCtrl == NULL) return E_POINTER;
	return pCExceptionGeneratorCtrl->QueryInterface(IID_ITcCtrl, reinterpret_cast<void**>(ppCtrl));
}
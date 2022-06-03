
// ****************** ExceptionGeneratorDrv.cpp *************************
// Generated by TE140x-TargetForMatlabSimulink  2.3.1.1
// MATLAB 9.10.0.1710957 (R2021a) Update 4 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.3.1.1
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#include "TcPch.h"
#pragma hdrstop
#define DEVICE_MAIN

#include "ExceptionGeneratorDrv.h"
#include "ExceptionGeneratorClassFactory.h"
#include "ExceptionGeneratorVersion.h"

DECLARE_GENERIC_DEVICE(ExceptionGeneratorDRV)
#undef DEVICE_MAIN

IOSTATUS CExceptionGeneratorDrv::OnLoad( )
{
	TRACE(_T("CExceptionGeneratorClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CExceptionGeneratorClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CExceptionGeneratorDrv::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CExceptionGeneratorDrv::ExceptionGenerator_GetVersion( )
{
	return(0);
}

// ****************** ExceptionGeneratorDrv.h *************************
// Generated by TE140x-TargetForMatlabSimulink  2.8.1.0
// MATLAB 23.2.0.2409890 (R2023b) Update 3 (win64)
// TwinCAT 3.1.0.0
// TwinCAT Target 2.8.1.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#ifndef _ExceptionGeneratorDrv__h_INCLUDED
#define _ExceptionGeneratorDrv__h_INCLUDED

#include "TcPch.h"

#define ExceptionGeneratorDRV_NAME			"ExceptionGenerator"
#define ExceptionGeneratorDRV_Major			1
#define ExceptionGeneratorDRV_Minor			0

#if defined DEVICE_MAIN		// is supposed to be __cplusplus

#define DEVICE_CLASS			CExceptionGeneratorDrv

#include "ObjDriver.h"

class CExceptionGeneratorDrv : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad( );
	virtual VOID		OnUnLoad( );
	
	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long _cdecl ExceptionGenerator_GetVersion( );
};

#endif	// #if defined DEVICE_MAIN

Begin_VxD_Service_Table( ExceptionGeneratorDRV)
	VxD_Service( ExceptionGenerator_GetVersion		)
End_VxD_Service_Table


#endif // _ExceptionGeneratorDrv__h_INCLUDED
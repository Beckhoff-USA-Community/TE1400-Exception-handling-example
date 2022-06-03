
// ****************** FbExceptionGenerator.h *************************
// Generated by TE140x-TargetForMatlabSimulink  2.3.1.1
// MATLAB 9.11.0.1837725 (R2021b) Update 2 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.3.1.1
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#ifndef _FbExceptionGenerator__h_INCLUDED
#define _FbExceptionGenerator__h_INCLUDED



#include "TcMatSimPou.h"
#include "TcGeneratedPou.h"
#include "ExceptionGenerator.h"
#include "ExceptionGeneratorInternal.h"

#include "ExceptionGeneratorDuts.h"
#include "ExceptionGeneratorInterfaces.h"
#include "ExceptionGeneratorVersion.h"

class CFbExceptionGenerator :
	public TcMatSim::GeneratedPou
{
public:

	inline void operator()() {this->FB_Main();}
	inline GUID get_VersionID() {return VID_ExceptionGenerator;}
	inline CLSID get_ClassID() {return CID_FB_EXCEPTIONGENERATOR;}

	DECLARE_FUNC_MAP_FB()

	CFbExceptionGenerator();
	~CFbExceptionGenerator();
	bool FB_Main();
	static void _FB_Main(ST_FB_Main_FB_ExceptionGenerator* ST_Param);
	bool FB_exit(bool bInCopyCode);
	static void _FB_exit(ST_FB_exit_FB_ExceptionGenerator* ST_Param);
	bool FB_init(bool bInitRetains, bool bInCopyCode);
	static void _FB_init(ST_FB_init_FB_ExceptionGenerator* ST_Param);


	bool DivByZero;
	bool FloatingPoint;
	double Result;
	double Counter;
	PVOID ExceptionGenerator_Obj;


};
TYPESIZE_VALIDATION2(CFbExceptionGenerator,40,48);

			
#endif // _FbExceptionGenerator__h_INCLUDED
			
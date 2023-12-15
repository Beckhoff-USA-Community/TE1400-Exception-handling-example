/*
 * rtGetInf.h
 *
 * Third Party Support License -- for use only to support products
 * interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "ExceptionGenerator".
 *
 * Model version              : 2.5
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C++ source code generated on : Fri Dec 15 09:53:11 2023
 *
 * Target selection: TwinCatGrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_rtGetInf_h_
#define RTW_HEADER_rtGetInf_h_

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rtwtypes.h"
#ifdef __cplusplus

extern "C"
{

#endif

  extern real_T rtGetInf(void);
  extern real32_T rtGetInfF(void);
  extern real_T rtGetMinusInf(void);
  extern real32_T rtGetMinusInfF(void);

#ifdef __cplusplus

}                                      /* extern "C" */

#endif
#endif                                 /* RTW_HEADER_rtGetInf_h_ */

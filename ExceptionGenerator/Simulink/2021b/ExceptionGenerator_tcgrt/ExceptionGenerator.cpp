/*
 * ExceptionGenerator.cpp
 *
 * Third Party Support License -- for use only to support products
 * interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "ExceptionGenerator".
 *
 * Model version              : 2.2
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri Jun  3 09:28:06 2022
 *
 * Target selection: TwinCatGrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ExceptionGenerator.h"
#include "ExceptionGenerator_private.h"

/* Model step function */
void ExceptionGeneratorModelClass::step()
{
  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/DivByZero'
   *  Inport: '<Root>/FloatingPoint'
   */
  ExceptionGenerator_DW.Counter++;
  if (ExceptionGenerator_U.DivByZero) {
    /* Outport: '<Root>/Result' */
    ExceptionGenerator_Y.Result = ExceptionGenerator_DW.a /
      ExceptionGenerator_DW.b;
  } else if (ExceptionGenerator_U.FloatingPoint) {
    /* Outport: '<Root>/Result' */
    ExceptionGenerator_Y.Result = ExceptionGenerator_DW.fPosInf +
      ExceptionGenerator_DW.fNegInf;
  } else {
    /* Outport: '<Root>/Result' */
    ExceptionGenerator_Y.Result = 0.0;
  }

  /* Outport: '<Root>/Counter' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  ExceptionGenerator_Y.Counter = ExceptionGenerator_DW.Counter;
}

/* Model initialize function */
void ExceptionGeneratorModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
  ExceptionGenerator_DW.a = 1.0;
  ExceptionGenerator_DW.fNegInf = (rtMinusInf);
  ExceptionGenerator_DW.fPosInf = (rtInf);
}

/* Model terminate function */
void ExceptionGeneratorModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
ExceptionGeneratorModelClass::ExceptionGeneratorModelClass() :
  ExceptionGenerator_U(),
  ExceptionGenerator_Y(),
  ExceptionGenerator_DW(),
  ExceptionGenerator_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
ExceptionGeneratorModelClass::~ExceptionGeneratorModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_ExceptionGenerator_T * ExceptionGeneratorModelClass::getRTM()
{
  return (&ExceptionGenerator_M);
}

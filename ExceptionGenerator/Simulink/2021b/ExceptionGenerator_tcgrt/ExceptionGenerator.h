/*
 * ExceptionGenerator.h
 *
 * Third Party Support License -- for use only to support products
 * interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "ExceptionGenerator".
 *
 * Model version              : 2.5
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Wed Oct  5 15:04:38 2022
 *
 * Target selection: TwinCatGrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ExceptionGenerator_h_
#define RTW_HEADER_ExceptionGenerator_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "ExceptionGenerator_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
struct DW_ExceptionGenerator_T {
  real_T Counter;                      /* '<Root>/MATLAB Function' */
  real_T a;                            /* '<Root>/MATLAB Function' */
  real_T b;                            /* '<Root>/MATLAB Function' */
  real_T fPosInf;                      /* '<Root>/MATLAB Function' */
  real_T fNegInf;                      /* '<Root>/MATLAB Function' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_ExceptionGenerator_T {
  boolean_T DivByZero;                 /* '<Root>/DivByZero' */
  boolean_T FloatingPoint;             /* '<Root>/FloatingPoint' */
};

/* External outputs (root outports fed by signals with default storage) */
struct ExtY_ExceptionGenerator_T {
  real_T Result;                       /* '<Root>/Result' */
  real_T Counter;                      /* '<Root>/Counter' */
};

/* Real-time Model Data Structure */
struct tag_RTM_ExceptionGenerator_T {
  const char_T *errorStatus;
};

/* Class declaration for model ExceptionGenerator */
class ExceptionGeneratorModelClass
{
  /* public data and function members */
 public:
  /* Real-Time Model get method */
  RT_MODEL_ExceptionGenerator_T * getRTM();

  /* Root inports set method */
  void setExternalInputs(const ExtU_ExceptionGenerator_T
    *pExtU_ExceptionGenerator_T)
  {
    ExceptionGenerator_U = *pExtU_ExceptionGenerator_T;
  }

  /* Root outports get method */
  const ExtY_ExceptionGenerator_T &getExternalOutputs() const
  {
    return ExceptionGenerator_Y;
  }

  /* Initial conditions function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate(); /* TE140x */

  /* Constructor */
  ExceptionGeneratorModelClass();

  /* Destructor */
  ~ExceptionGeneratorModelClass();

  /* private data and function members */
 public:
  /* External inputs */
  ExtU_ExceptionGenerator_T ExceptionGenerator_U;

  /* External outputs */
  ExtY_ExceptionGenerator_T ExceptionGenerator_Y;

  /* Block states */
  DW_ExceptionGenerator_T ExceptionGenerator_DW;

  /* Real-Time Model */
  RT_MODEL_ExceptionGenerator_T ExceptionGenerator_M;
};

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ExceptionGenerator'
 * '<S1>'   : 'ExceptionGenerator/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_ExceptionGenerator_h_ */

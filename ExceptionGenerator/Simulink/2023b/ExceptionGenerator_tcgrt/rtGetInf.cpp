/*
 * rtGetInf.cpp
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

#include "rtwtypes.h"

extern "C"
{

#include "rtGetInf.h"

}

#include <stddef.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#define NumBitsPerChar                 8U

extern "C"
{
  /*
   * Initialize rtInf needed by the generated code.
   * Inf is initialized as non-signaling. Assumes IEEE.
   */
  real_T rtGetInf(void)
  {
    size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
    real_T inf = 0.0;
    if (bitsPerReal == 32U) {
      inf = rtGetInfF();
    } else {
      uint16_T one = 1U;
      enum {
        LittleEndian,
        BigEndian
      } machByteOrder = (*((uint8_T *) &one) == 1U) ? LittleEndian : BigEndian;
      switch (machByteOrder) {
       case LittleEndian:
        {
          union {
            LittleEndianIEEEDouble bitVal;
            real_T fltVal;
          } tmpVal;

          tmpVal.bitVal.words.wordH = 0x7FF00000U;
          tmpVal.bitVal.words.wordL = 0x00000000U;
          inf = tmpVal.fltVal;
          break;
        }

       case BigEndian:
        {
          union {
            BigEndianIEEEDouble bitVal;
            real_T fltVal;
          } tmpVal;

          tmpVal.bitVal.words.wordH = 0x7FF00000U;
          tmpVal.bitVal.words.wordL = 0x00000000U;
          inf = tmpVal.fltVal;
          break;
        }
      }
    }

    return inf;
  }

  /*
   * Initialize rtInfF needed by the generated code.
   * Inf is initialized as non-signaling. Assumes IEEE.
   */
  real32_T rtGetInfF(void)
  {
    IEEESingle infF;
    infF.wordL.wordLuint = 0x7F800000U;
    return infF.wordL.wordLreal;
  }

  /*
   * Initialize rtMinusInf needed by the generated code.
   * Inf is initialized as non-signaling. Assumes IEEE.
   */
  real_T rtGetMinusInf(void)
  {
    size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
    real_T minf = 0.0;
    if (bitsPerReal == 32U) {
      minf = rtGetMinusInfF();
    } else {
      uint16_T one = 1U;
      enum {
        LittleEndian,
        BigEndian
      } machByteOrder = (*((uint8_T *) &one) == 1U) ? LittleEndian : BigEndian;
      switch (machByteOrder) {
       case LittleEndian:
        {
          union {
            LittleEndianIEEEDouble bitVal;
            real_T fltVal;
          } tmpVal;

          tmpVal.bitVal.words.wordH = 0xFFF00000U;
          tmpVal.bitVal.words.wordL = 0x00000000U;
          minf = tmpVal.fltVal;
          break;
        }

       case BigEndian:
        {
          union {
            BigEndianIEEEDouble bitVal;
            real_T fltVal;
          } tmpVal;

          tmpVal.bitVal.words.wordH = 0xFFF00000U;
          tmpVal.bitVal.words.wordL = 0x00000000U;
          minf = tmpVal.fltVal;
          break;
        }
      }
    }

    return minf;
  }

  /*
   * Initialize rtMinusInfF needed by the generated code.
   * Inf is initialized as non-signaling. Assumes IEEE.
   */
  real32_T rtGetMinusInfF(void)
  {
    IEEESingle minfF;
    minfF.wordL.wordLuint = 0xFF800000U;
    return minfF.wordL.wordLreal;
  }
}

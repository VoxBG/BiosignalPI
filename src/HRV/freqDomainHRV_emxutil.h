//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: freqDomainHRV_emxutil.h
//
// MATLAB Coder version            : 3.0
// C/C++ source code generated on  : 25-Nov-2015 14:25:38
//
#ifndef __FREQDOMAINHRV_EMXUTIL_H__
#define __FREQDOMAINHRV_EMXUTIL_H__

// Include Files
#include <cmath>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "freqDomainHRV_types.h"

// Function Declarations
extern void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel, int
  elementSize);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInit_real_T1(emxArray_real_T **pEmxArray, int numDimensions);

#endif

//
// File trailer for freqDomainHRV_emxutil.h
//
// [EOF]
//

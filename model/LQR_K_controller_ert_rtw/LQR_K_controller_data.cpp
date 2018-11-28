/*
 * LQR_K_controller_data.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "LQR_K_controller".
 *
 * Model version              : 1.26
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C++ source code generated on : Wed Nov 28 00:28:46 2018
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LQR_K_controller.h"
#include "LQR_K_controller_private.h"

/* Block parameters (auto storage) */
P_LQR_K_controller_T LQR_K_controller_P = {
  /* Computed Parameter: Constant_Value
   * Referenced by: '<S8>/Constant'
   */
  {
    0.0,                               /* X */
    0.0,                               /* Y */
    0.0                                /* Theta */
  },

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S9>/Constant'
   */
  {
    0.0,                               /* X */
    0.0,                               /* Y */
    0.0                                /* Theta */
  },

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S12>/Constant'
   */
  {
    0.0,                               /* X */
    0.0,                               /* Y */
    0.0                                /* Theta */
  },

  /* Expression: SampleTime
   * Referenced by: '<S1>/Get Parameter8'
   */
  -1.0,

  /* Expression: SampleTime
   * Referenced by: '<S1>/Get Parameter6'
   */
  -1.0,

  /* Expression: SampleTime
   * Referenced by: '<S1>/Get Parameter5'
   */
  -1.0,

  /* Expression: SampleTime
   * Referenced by: '<S1>/Get Parameter4'
   */
  -1.0,

  /* Expression: SampleTime
   * Referenced by: '<S1>/Get Parameter7'
   */
  -1.0,

  /* Expression: SampleTime
   * Referenced by: '<S1>/Get Parameter2'
   */
  -1.0,

  /* Expression: SampleTime
   * Referenced by: '<S1>/Get Parameter1'
   */
  -1.0,

  /* Expression: SampleTime
   * Referenced by: '<S1>/Get Parameter'
   */
  -1.0,

  /* Expression: SampleTime
   * Referenced by: '<S1>/Get Parameter3'
   */
  -1.0,

  /* Start of '<S9>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S11>/Out1'
     */
    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Theta */
    }
  }
  ,

  /* End of '<S9>/Enabled Subsystem' */

  /* Start of '<S8>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S10>/Out1'
     */
    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Theta */
    }
  }
  /* End of '<S8>/Enabled Subsystem' */
};

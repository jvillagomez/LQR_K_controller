/*
 * LQR_K_controller_private.h
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

#ifndef RTW_HEADER_LQR_K_controller_private_h_
#define RTW_HEADER_LQR_K_controller_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "LQR_K_controller.h"

extern void LQR_K_controller_MATLABFunction(real_T rtu_x, real_T rtu_y, real_T
  rtu_theta, B_MATLABFunction_LQR_K_contro_T *localB);
extern void LQR_K_con_EnabledSubsystem_Init(B_EnabledSubsystem_LQR_K_cont_T
  *localB, P_EnabledSubsystem_LQR_K_cont_T *localP);
extern void LQR_K_controll_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_LQR_K_controller_geometry_msgs_Pose2D *rtu_In1,
  B_EnabledSubsystem_LQR_K_cont_T *localB);

#endif                                 /* RTW_HEADER_LQR_K_controller_private_h_ */

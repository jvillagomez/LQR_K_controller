/*
 * LQR_K_controller_types.h
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

#ifndef RTW_HEADER_LQR_K_controller_types_h_
#define RTW_HEADER_LQR_K_controller_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_LQR_K_controller_geometry_msgs_Pose2D_
#define DEFINED_TYPEDEF_FOR_SL_Bus_LQR_K_controller_geometry_msgs_Pose2D_

typedef struct {
  real_T X;
  real_T Y;
  real_T Theta;
} SL_Bus_LQR_K_controller_geometry_msgs_Pose2D;

#endif

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  int32_T isInitialized;
  real_T SampleTime;
} robotics_slros_internal_block_T;

#endif                                 /*typedef_robotics_slros_internal_block_T*/

#ifndef typedef_robotics_slros_internal_blo_d_T
#define typedef_robotics_slros_internal_blo_d_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_blo_d_T;

#endif                                 /*typedef_robotics_slros_internal_blo_d_T*/

#ifndef typedef_robotics_slros_internal_bl_d4_T
#define typedef_robotics_slros_internal_bl_d4_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_bl_d4_T;

#endif                                 /*typedef_robotics_slros_internal_bl_d4_T*/

/* Parameters for system: '<S8>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_LQR_K_cont_T_ P_EnabledSubsystem_LQR_K_cont_T;

/* Parameters (auto storage) */
typedef struct P_LQR_K_controller_T_ P_LQR_K_controller_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_LQR_K_controller_T RT_MODEL_LQR_K_controller_T;

#endif                                 /* RTW_HEADER_LQR_K_controller_types_h_ */

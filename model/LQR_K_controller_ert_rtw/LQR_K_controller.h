/*
 * LQR_K_controller.h
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

#ifndef RTW_HEADER_LQR_K_controller_h_
#define RTW_HEADER_LQR_K_controller_h_
#include <stddef.h>
#include <string.h>
#ifndef LQR_K_controller_COMMON_INCLUDES_
# define LQR_K_controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 /* LQR_K_controller_COMMON_INCLUDES_ */

#include "LQR_K_controller_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S2>/MATLAB Function' */
typedef struct {
  real_T matrix[3];                    /* '<S2>/MATLAB Function' */
} B_MATLABFunction_LQR_K_contro_T;

/* Block signals for system '<S8>/Enabled Subsystem' */
typedef struct {
  SL_Bus_LQR_K_controller_geometry_msgs_Pose2D In1;/* '<S10>/In1' */
} B_EnabledSubsystem_LQR_K_cont_T;

/* Block signals (auto storage) */
typedef struct {
  real_T value[9];
  char_T cv0[29];
  SL_Bus_LQR_K_controller_geometry_msgs_Pose2D b_varargout_2;
  SL_Bus_LQR_K_controller_geometry_msgs_Pose2D BusAssignment;/* '<S4>/Bus Assignment' */
  real_T Kposition_difference[3];      /* '<Root>/K*position_difference' */
  real_T value_m;
  real_T value_c;
  real_T value_k;
  real_T value_cx;
  real_T value_b;
  B_EnabledSubsystem_LQR_K_cont_T EnabledSubsystem_f;/* '<S9>/Enabled Subsystem' */
  B_EnabledSubsystem_LQR_K_cont_T EnabledSubsystem;/* '<S8>/Enabled Subsystem' */
  B_MATLABFunction_LQR_K_contro_T sf_MATLABFunction2;/* '<S2>/MATLAB Function2' */
  B_MATLABFunction_LQR_K_contro_T sf_MATLABFunction;/* '<S2>/MATLAB Function' */
} B_LQR_K_controller_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  robotics_slros_internal_block_T obj; /* '<S1>/Get Parameter3' */
  robotics_slros_internal_block_T obj_h;/* '<S1>/Get Parameter' */
  robotics_slros_internal_block_T obj_n;/* '<S1>/Get Parameter1' */
  robotics_slros_internal_block_T obj_j;/* '<S1>/Get Parameter2' */
  robotics_slros_internal_block_T obj_f;/* '<S1>/Get Parameter7' */
  robotics_slros_internal_block_T obj_nc;/* '<S1>/Get Parameter4' */
  robotics_slros_internal_block_T obj_e;/* '<S1>/Get Parameter5' */
  robotics_slros_internal_block_T obj_j1;/* '<S1>/Get Parameter6' */
  robotics_slros_internal_block_T obj_p;/* '<S1>/Get Parameter8' */
  robotics_slros_internal_blo_d_T obj_nl;/* '<S9>/SourceBlock' */
  robotics_slros_internal_blo_d_T obj_l;/* '<S8>/SourceBlock' */
  robotics_slros_internal_bl_d4_T obj_m;/* '<S14>/SinkBlock' */
  boolean_T objisempty;                /* '<S14>/SinkBlock' */
  boolean_T objisempty_l;              /* '<S9>/SourceBlock' */
  boolean_T objisempty_i;              /* '<S8>/SourceBlock' */
  boolean_T objisempty_k;              /* '<S1>/Get Parameter3' */
  boolean_T objisempty_c;              /* '<S1>/Get Parameter' */
  boolean_T objisempty_h;              /* '<S1>/Get Parameter1' */
  boolean_T objisempty_p;              /* '<S1>/Get Parameter2' */
  boolean_T objisempty_f;              /* '<S1>/Get Parameter7' */
  boolean_T objisempty_p2;             /* '<S1>/Get Parameter4' */
  boolean_T objisempty_po;             /* '<S1>/Get Parameter5' */
  boolean_T objisempty_e;              /* '<S1>/Get Parameter6' */
  boolean_T objisempty_d;              /* '<S1>/Get Parameter8' */
} DW_LQR_K_controller_T;

/* Parameters for system: '<S8>/Enabled Subsystem' */
struct P_EnabledSubsystem_LQR_K_cont_T_ {
  SL_Bus_LQR_K_controller_geometry_msgs_Pose2D Out1_Y0;/* Computed Parameter: Out1_Y0
                                                        * Referenced by: '<S10>/Out1'
                                                        */
};

/* Parameters (auto storage) */
struct P_LQR_K_controller_T_ {
  SL_Bus_LQR_K_controller_geometry_msgs_Pose2D Constant_Value;/* Computed Parameter: Constant_Value
                                                               * Referenced by: '<S8>/Constant'
                                                               */
  SL_Bus_LQR_K_controller_geometry_msgs_Pose2D Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                                 * Referenced by: '<S9>/Constant'
                                                                 */
  SL_Bus_LQR_K_controller_geometry_msgs_Pose2D Constant_Value_f;/* Computed Parameter: Constant_Value_f
                                                                 * Referenced by: '<S12>/Constant'
                                                                 */
  real_T GetParameter8_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<S1>/Get Parameter8'
                                        */
  real_T GetParameter6_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<S1>/Get Parameter6'
                                        */
  real_T GetParameter5_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<S1>/Get Parameter5'
                                        */
  real_T GetParameter4_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<S1>/Get Parameter4'
                                        */
  real_T GetParameter7_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<S1>/Get Parameter7'
                                        */
  real_T GetParameter2_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<S1>/Get Parameter2'
                                        */
  real_T GetParameter1_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<S1>/Get Parameter1'
                                        */
  real_T GetParameter_SampleTime;      /* Expression: SampleTime
                                        * Referenced by: '<S1>/Get Parameter'
                                        */
  real_T GetParameter3_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<S1>/Get Parameter3'
                                        */
  P_EnabledSubsystem_LQR_K_cont_T EnabledSubsystem_f;/* '<S9>/Enabled Subsystem' */
  P_EnabledSubsystem_LQR_K_cont_T EnabledSubsystem;/* '<S8>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_LQR_K_controller_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_LQR_K_controller_T LQR_K_controller_P;

#ifdef __cplusplus

}
#endif

/* Block signals (auto storage) */
extern B_LQR_K_controller_T LQR_K_controller_B;

/* Block states (auto storage) */
extern DW_LQR_K_controller_T LQR_K_controller_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void LQR_K_controller_initialize(void);
  extern void LQR_K_controller_step(void);
  extern void LQR_K_controller_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_LQR_K_controller_T *const LQR_K_controller_M;

#ifdef __cplusplus

}
#endif

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
 * '<Root>' : 'LQR_K_controller'
 * '<S1>'   : 'LQR_K_controller/Get K_gain ROSparam'
 * '<S2>'   : 'LQR_K_controller/Position Difference'
 * '<S3>'   : 'LQR_K_controller/Synthetic position publishers'
 * '<S4>'   : 'LQR_K_controller/Velocities Publisher'
 * '<S5>'   : 'LQR_K_controller/Get K_gain ROSparam/Build k-gain matrix'
 * '<S6>'   : 'LQR_K_controller/Position Difference/MATLAB Function'
 * '<S7>'   : 'LQR_K_controller/Position Difference/MATLAB Function2'
 * '<S8>'   : 'LQR_K_controller/Position Difference/Subscribe'
 * '<S9>'   : 'LQR_K_controller/Position Difference/Subscribe1'
 * '<S10>'  : 'LQR_K_controller/Position Difference/Subscribe/Enabled Subsystem'
 * '<S11>'  : 'LQR_K_controller/Position Difference/Subscribe1/Enabled Subsystem'
 * '<S12>'  : 'LQR_K_controller/Velocities Publisher/Blank Message'
 * '<S13>'  : 'LQR_K_controller/Velocities Publisher/MATLAB Function1'
 * '<S14>'  : 'LQR_K_controller/Velocities Publisher/Publish'
 */
#endif                                 /* RTW_HEADER_LQR_K_controller_h_ */

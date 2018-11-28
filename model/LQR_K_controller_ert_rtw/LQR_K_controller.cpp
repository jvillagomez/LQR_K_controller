/*
 * LQR_K_controller.cpp
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
#define LQR_K_con_ParameterInitialValue (0.0)
#define LQR_K_controlle_MessageQueueLen (1)

/* Block signals (auto storage) */
B_LQR_K_controller_T LQR_K_controller_B;

/* Block states (auto storage) */
DW_LQR_K_controller_T LQR_K_controller_DW;

/* Real-time model */
RT_MODEL_LQR_K_controller_T LQR_K_controller_M_;
RT_MODEL_LQR_K_controller_T *const LQR_K_controller_M = &LQR_K_controller_M_;

/*
 * Output and update for atomic system:
 *    '<S2>/MATLAB Function'
 *    '<S2>/MATLAB Function2'
 */
void LQR_K_controller_MATLABFunction(real_T rtu_x, real_T rtu_y, real_T
  rtu_theta, B_MATLABFunction_LQR_K_contro_T *localB)
{
  localB->matrix[0] = rtu_x;
  localB->matrix[1] = rtu_y;
  localB->matrix[2] = rtu_theta;
}

/*
 * System initialize for enable system:
 *    '<S8>/Enabled Subsystem'
 *    '<S9>/Enabled Subsystem'
 */
void LQR_K_con_EnabledSubsystem_Init(B_EnabledSubsystem_LQR_K_cont_T *localB,
  P_EnabledSubsystem_LQR_K_cont_T *localP)
{
  /* SystemInitialize for Outport: '<S10>/Out1' */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S8>/Enabled Subsystem'
 *    '<S9>/Enabled Subsystem'
 */
void LQR_K_controll_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_LQR_K_controller_geometry_msgs_Pose2D *rtu_In1,
  B_EnabledSubsystem_LQR_K_cont_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S10>/Enable'
   */
  if (rtu_Enable) {
    /* Inport: '<S10>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S8>/Enabled Subsystem' */
}

/* Model step function */
void LQR_K_controller_step(void)
{
  boolean_T p;
  real_T value;
  real_T value_0;
  real_T value_1;
  real_T value_2;
  boolean_T b_varargout_1;
  int32_T i;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;

  /* Outputs for Atomic SubSystem: '<S2>/Subscribe' */
  /* MATLABSystem: '<S8>/SourceBlock' */
  b_varargout_1 = Sub_LQR_K_controller_6.getLatestMessage
    (&LQR_K_controller_B.b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' */
  LQR_K_controll_EnabledSubsystem(b_varargout_1,
    &LQR_K_controller_B.b_varargout_2, &LQR_K_controller_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S8>/Enabled Subsystem' */

  /* End of Outputs for SubSystem: '<S2>/Subscribe' */

  /* MATLAB Function: '<S2>/MATLAB Function' */
  LQR_K_controller_MATLABFunction(LQR_K_controller_B.EnabledSubsystem.In1.X,
    LQR_K_controller_B.EnabledSubsystem.In1.Y,
    LQR_K_controller_B.EnabledSubsystem.In1.Theta,
    &LQR_K_controller_B.sf_MATLABFunction);

  /* Outputs for Atomic SubSystem: '<S2>/Subscribe1' */
  /* MATLABSystem: '<S9>/SourceBlock' */
  b_varargout_1 = Sub_LQR_K_controller_7.getLatestMessage
    (&LQR_K_controller_B.b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' */
  LQR_K_controll_EnabledSubsystem(b_varargout_1,
    &LQR_K_controller_B.b_varargout_2, &LQR_K_controller_B.EnabledSubsystem_f);

  /* End of Outputs for SubSystem: '<S9>/Enabled Subsystem' */

  /* End of Outputs for SubSystem: '<S2>/Subscribe1' */

  /* MATLAB Function: '<S2>/MATLAB Function2' */
  LQR_K_controller_MATLABFunction(LQR_K_controller_B.EnabledSubsystem_f.In1.X,
    LQR_K_controller_B.EnabledSubsystem_f.In1.Y,
    LQR_K_controller_B.EnabledSubsystem_f.In1.Theta,
    &LQR_K_controller_B.sf_MATLABFunction2);

  /* MATLABSystem: '<S1>/Get Parameter3' */
  b_varargout_1 = false;
  p = true;
  if (!(LQR_K_controller_DW.obj.SampleTime ==
        LQR_K_controller_P.GetParameter3_SampleTime)) {
    p = false;
  }

  if (p) {
    b_varargout_1 = true;
  }

  if (!b_varargout_1) {
    LQR_K_controller_DW.obj.SampleTime =
      LQR_K_controller_P.GetParameter3_SampleTime;
  }

  ParamGet_LQR_K_controller_94.get_parameter(&LQR_K_controller_B.value_m);

  /* MATLABSystem: '<S1>/Get Parameter' */
  b_varargout_1 = false;
  p = true;
  if (!(LQR_K_controller_DW.obj_h.SampleTime ==
        LQR_K_controller_P.GetParameter_SampleTime)) {
    p = false;
  }

  if (p) {
    b_varargout_1 = true;
  }

  if (!b_varargout_1) {
    LQR_K_controller_DW.obj_h.SampleTime =
      LQR_K_controller_P.GetParameter_SampleTime;
  }

  ParamGet_LQR_K_controller_91.get_parameter(&LQR_K_controller_B.value_c);

  /* MATLABSystem: '<S1>/Get Parameter1' */
  b_varargout_1 = false;
  p = true;
  if (!(LQR_K_controller_DW.obj_n.SampleTime ==
        LQR_K_controller_P.GetParameter1_SampleTime)) {
    p = false;
  }

  if (p) {
    b_varargout_1 = true;
  }

  if (!b_varargout_1) {
    LQR_K_controller_DW.obj_n.SampleTime =
      LQR_K_controller_P.GetParameter1_SampleTime;
  }

  ParamGet_LQR_K_controller_92.get_parameter(&LQR_K_controller_B.value_k);

  /* MATLABSystem: '<S1>/Get Parameter2' */
  b_varargout_1 = false;
  p = true;
  if (!(LQR_K_controller_DW.obj_j.SampleTime ==
        LQR_K_controller_P.GetParameter2_SampleTime)) {
    p = false;
  }

  if (p) {
    b_varargout_1 = true;
  }

  if (!b_varargout_1) {
    LQR_K_controller_DW.obj_j.SampleTime =
      LQR_K_controller_P.GetParameter2_SampleTime;
  }

  ParamGet_LQR_K_controller_93.get_parameter(&LQR_K_controller_B.value_cx);

  /* MATLABSystem: '<S1>/Get Parameter7' */
  b_varargout_1 = false;
  p = true;
  if (!(LQR_K_controller_DW.obj_f.SampleTime ==
        LQR_K_controller_P.GetParameter7_SampleTime)) {
    p = false;
  }

  if (p) {
    b_varargout_1 = true;
  }

  if (!b_varargout_1) {
    LQR_K_controller_DW.obj_f.SampleTime =
      LQR_K_controller_P.GetParameter7_SampleTime;
  }

  ParamGet_LQR_K_controller_98.get_parameter(&LQR_K_controller_B.value_b);

  /* MATLABSystem: '<S1>/Get Parameter4' */
  b_varargout_1 = false;
  p = true;
  if (!(LQR_K_controller_DW.obj_nc.SampleTime ==
        LQR_K_controller_P.GetParameter4_SampleTime)) {
    p = false;
  }

  if (p) {
    b_varargout_1 = true;
  }

  if (!b_varargout_1) {
    LQR_K_controller_DW.obj_nc.SampleTime =
      LQR_K_controller_P.GetParameter4_SampleTime;
  }

  ParamGet_LQR_K_controller_95.get_parameter(&value);

  /* MATLABSystem: '<S1>/Get Parameter5' */
  b_varargout_1 = false;
  p = true;
  if (!(LQR_K_controller_DW.obj_e.SampleTime ==
        LQR_K_controller_P.GetParameter5_SampleTime)) {
    p = false;
  }

  if (p) {
    b_varargout_1 = true;
  }

  if (!b_varargout_1) {
    LQR_K_controller_DW.obj_e.SampleTime =
      LQR_K_controller_P.GetParameter5_SampleTime;
  }

  ParamGet_LQR_K_controller_96.get_parameter(&value_0);

  /* MATLABSystem: '<S1>/Get Parameter6' */
  b_varargout_1 = false;
  p = true;
  if (!(LQR_K_controller_DW.obj_j1.SampleTime ==
        LQR_K_controller_P.GetParameter6_SampleTime)) {
    p = false;
  }

  if (p) {
    b_varargout_1 = true;
  }

  if (!b_varargout_1) {
    LQR_K_controller_DW.obj_j1.SampleTime =
      LQR_K_controller_P.GetParameter6_SampleTime;
  }

  ParamGet_LQR_K_controller_97.get_parameter(&value_1);

  /* MATLABSystem: '<S1>/Get Parameter8' */
  b_varargout_1 = false;
  p = true;
  if (!(LQR_K_controller_DW.obj_p.SampleTime ==
        LQR_K_controller_P.GetParameter8_SampleTime)) {
    p = false;
  }

  if (p) {
    b_varargout_1 = true;
  }

  if (!b_varargout_1) {
    LQR_K_controller_DW.obj_p.SampleTime =
      LQR_K_controller_P.GetParameter8_SampleTime;
  }

  ParamGet_LQR_K_controller_99.get_parameter(&value_2);

  /* Sum: '<S2>/Desired-Current' incorporates:
   *  Product: '<Root>/K*position_difference'
   */
  tmp = LQR_K_controller_B.sf_MATLABFunction.matrix[0] -
    LQR_K_controller_B.sf_MATLABFunction2.matrix[0];
  tmp_0 = LQR_K_controller_B.sf_MATLABFunction.matrix[1] -
    LQR_K_controller_B.sf_MATLABFunction2.matrix[1];
  tmp_1 = LQR_K_controller_B.sf_MATLABFunction.matrix[2] -
    LQR_K_controller_B.sf_MATLABFunction2.matrix[2];

  /* MATLAB Function: '<S1>/Build k-gain matrix' incorporates:
   *  MATLABSystem: '<S1>/Get Parameter'
   *  MATLABSystem: '<S1>/Get Parameter1'
   *  MATLABSystem: '<S1>/Get Parameter2'
   *  MATLABSystem: '<S1>/Get Parameter3'
   *  MATLABSystem: '<S1>/Get Parameter4'
   *  MATLABSystem: '<S1>/Get Parameter5'
   *  MATLABSystem: '<S1>/Get Parameter6'
   *  MATLABSystem: '<S1>/Get Parameter7'
   *  MATLABSystem: '<S1>/Get Parameter8'
   */
  LQR_K_controller_B.value[0] = LQR_K_controller_B.value_m;
  LQR_K_controller_B.value[3] = LQR_K_controller_B.value_c;
  LQR_K_controller_B.value[6] = LQR_K_controller_B.value_k;
  LQR_K_controller_B.value[1] = LQR_K_controller_B.value_cx;
  LQR_K_controller_B.value[4] = LQR_K_controller_B.value_b;
  LQR_K_controller_B.value[7] = value;
  LQR_K_controller_B.value[2] = value_0;
  LQR_K_controller_B.value[5] = value_1;
  LQR_K_controller_B.value[8] = value_2;

  /* Product: '<Root>/K*position_difference' */
  for (i = 0; i < 3; i++) {
    LQR_K_controller_B.Kposition_difference[i] = LQR_K_controller_B.value[3 * i
      + 2] * tmp_1 + (LQR_K_controller_B.value[3 * i + 1] * tmp_0 +
                      LQR_K_controller_B.value[3 * i] * tmp);
  }

  /* BusAssignment: '<S4>/Bus Assignment' incorporates:
   *  MATLAB Function: '<S4>/MATLAB Function1'
   */
  LQR_K_controller_B.BusAssignment.X = LQR_K_controller_B.Kposition_difference[0];
  LQR_K_controller_B.BusAssignment.Y = LQR_K_controller_B.Kposition_difference[1];
  LQR_K_controller_B.BusAssignment.Theta =
    LQR_K_controller_B.Kposition_difference[2];

  /* Outputs for Atomic SubSystem: '<S4>/Publish' */
  /* MATLABSystem: '<S14>/SinkBlock' */
  Pub_LQR_K_controller_24.publish(&LQR_K_controller_B.BusAssignment);

  /* End of Outputs for SubSystem: '<S4>/Publish' */
}

/* Model initialize function */
void LQR_K_controller_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(LQR_K_controller_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &LQR_K_controller_B), 0,
                sizeof(B_LQR_K_controller_T));

  /* states (dwork) */
  (void) memset((void *)&LQR_K_controller_DW, 0,
                sizeof(DW_LQR_K_controller_T));

  {
    static const char_T tmp[19] = { '/', 'd', 'e', 's', 'i', 'r', 'e', 'd', '_',
      'v', 'e', 'l', 'o', 'c', 'i', 't', 'i', 'e', 's' };

    static const char_T tmp_0[28] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      'l', 'e', 'r', '/', 'k', '_', 'g', 'a', 'i', 'n', '/', 'r', 'o', 'w', '3',
      '_', 'c', 'o', 'l', '3' };

    static const char_T tmp_1[28] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      'l', 'e', 'r', '/', 'k', '_', 'g', 'a', 'i', 'n', '/', 'r', 'o', 'w', '3',
      '_', 'c', 'o', 'l', '2' };

    static const char_T tmp_2[28] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      'l', 'e', 'r', '/', 'k', '_', 'g', 'a', 'i', 'n', '/', 'r', 'o', 'w', '3',
      '_', 'c', 'o', 'l', '1' };

    static const char_T tmp_3[28] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      'l', 'e', 'r', '/', 'k', '_', 'g', 'a', 'i', 'n', '/', 'r', 'o', 'w', '2',
      '_', 'c', 'o', 'l', '3' };

    static const char_T tmp_4[28] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      'l', 'e', 'r', '/', 'k', '_', 'g', 'a', 'i', 'n', '/', 'r', 'o', 'w', '2',
      '_', 'c', 'o', 'l', '2' };

    static const char_T tmp_5[28] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      'l', 'e', 'r', '/', 'k', '_', 'g', 'a', 'i', 'n', '/', 'r', 'o', 'w', '2',
      '_', 'c', 'o', 'l', '1' };

    static const char_T tmp_6[28] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      'l', 'e', 'r', '/', 'k', '_', 'g', 'a', 'i', 'n', '/', 'r', 'o', 'w', '1',
      '_', 'c', 'o', 'l', '3' };

    static const char_T tmp_7[28] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      'l', 'e', 'r', '/', 'k', '_', 'g', 'a', 'i', 'n', '/', 'r', 'o', 'w', '1',
      '_', 'c', 'o', 'l', '2' };

    static const char_T tmp_8[28] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      'l', 'e', 'r', '/', 'k', '_', 'g', 'a', 'i', 'n', '/', 'r', 'o', 'w', '1',
      '_', 'c', 'o', 'l', '1' };

    static const char_T tmp_9[25] = { '/', 'c', 'u', 'r', 'r', 'e', 'n', 't',
      '_', 'o', 'm', 'n', 'i', 'b', 'o', 't', '_', 'p', 'o', 's', 'i', 't', 'i',
      'o', 'n' };

    static const char_T tmp_a[25] = { '/', 'd', 'e', 's', 'i', 'r', 'e', 'd',
      '_', 'o', 'm', 'n', 'i', 'b', 'o', 't', '_', 'p', 'o', 's', 'i', 't', 'i',
      'o', 'n' };

    char_T tmp_b[20];
    char_T tmp_c[26];
    int32_T i;

    /* Start for Atomic SubSystem: '<S2>/Subscribe' */
    /* Start for MATLABSystem: '<S8>/SourceBlock' */
    LQR_K_controller_DW.obj_l.isInitialized = 0;
    LQR_K_controller_DW.objisempty_i = true;
    LQR_K_controller_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      tmp_c[i] = tmp_a[i];
    }

    tmp_c[25] = '\x00';
    Sub_LQR_K_controller_6.createSubscriber(tmp_c,
      LQR_K_controlle_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S8>/SourceBlock' */
    /* End of Start for SubSystem: '<S2>/Subscribe' */

    /* Start for Atomic SubSystem: '<S2>/Subscribe1' */
    /* Start for MATLABSystem: '<S9>/SourceBlock' */
    LQR_K_controller_DW.obj_nl.isInitialized = 0;
    LQR_K_controller_DW.objisempty_l = true;
    LQR_K_controller_DW.obj_nl.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      tmp_c[i] = tmp_9[i];
    }

    tmp_c[25] = '\x00';
    Sub_LQR_K_controller_7.createSubscriber(tmp_c,
      LQR_K_controlle_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S9>/SourceBlock' */
    /* End of Start for SubSystem: '<S2>/Subscribe1' */

    /* Start for MATLABSystem: '<S1>/Get Parameter3' */
    LQR_K_controller_DW.obj.isInitialized = 0;
    LQR_K_controller_DW.objisempty_k = true;
    LQR_K_controller_DW.obj.SampleTime =
      LQR_K_controller_P.GetParameter3_SampleTime;
    LQR_K_controller_DW.obj.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      LQR_K_controller_B.cv0[i] = tmp_8[i];
    }

    LQR_K_controller_B.cv0[28] = '\x00';
    ParamGet_LQR_K_controller_94.initialize(LQR_K_controller_B.cv0);
    ParamGet_LQR_K_controller_94.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_LQR_K_controller_94.set_initial_value
      (LQR_K_con_ParameterInitialValue);

    /* End of Start for MATLABSystem: '<S1>/Get Parameter3' */

    /* Start for MATLABSystem: '<S1>/Get Parameter' */
    LQR_K_controller_DW.obj_h.isInitialized = 0;
    LQR_K_controller_DW.objisempty_c = true;
    LQR_K_controller_DW.obj_h.SampleTime =
      LQR_K_controller_P.GetParameter_SampleTime;
    LQR_K_controller_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      LQR_K_controller_B.cv0[i] = tmp_7[i];
    }

    LQR_K_controller_B.cv0[28] = '\x00';
    ParamGet_LQR_K_controller_91.initialize(LQR_K_controller_B.cv0);
    ParamGet_LQR_K_controller_91.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_LQR_K_controller_91.set_initial_value
      (LQR_K_con_ParameterInitialValue);

    /* End of Start for MATLABSystem: '<S1>/Get Parameter' */

    /* Start for MATLABSystem: '<S1>/Get Parameter1' */
    LQR_K_controller_DW.obj_n.isInitialized = 0;
    LQR_K_controller_DW.objisempty_h = true;
    LQR_K_controller_DW.obj_n.SampleTime =
      LQR_K_controller_P.GetParameter1_SampleTime;
    LQR_K_controller_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      LQR_K_controller_B.cv0[i] = tmp_6[i];
    }

    LQR_K_controller_B.cv0[28] = '\x00';
    ParamGet_LQR_K_controller_92.initialize(LQR_K_controller_B.cv0);
    ParamGet_LQR_K_controller_92.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_LQR_K_controller_92.set_initial_value
      (LQR_K_con_ParameterInitialValue);

    /* End of Start for MATLABSystem: '<S1>/Get Parameter1' */

    /* Start for MATLABSystem: '<S1>/Get Parameter2' */
    LQR_K_controller_DW.obj_j.isInitialized = 0;
    LQR_K_controller_DW.objisempty_p = true;
    LQR_K_controller_DW.obj_j.SampleTime =
      LQR_K_controller_P.GetParameter2_SampleTime;
    LQR_K_controller_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      LQR_K_controller_B.cv0[i] = tmp_5[i];
    }

    LQR_K_controller_B.cv0[28] = '\x00';
    ParamGet_LQR_K_controller_93.initialize(LQR_K_controller_B.cv0);
    ParamGet_LQR_K_controller_93.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_LQR_K_controller_93.set_initial_value
      (LQR_K_con_ParameterInitialValue);

    /* End of Start for MATLABSystem: '<S1>/Get Parameter2' */

    /* Start for MATLABSystem: '<S1>/Get Parameter7' */
    LQR_K_controller_DW.obj_f.isInitialized = 0;
    LQR_K_controller_DW.objisempty_f = true;
    LQR_K_controller_DW.obj_f.SampleTime =
      LQR_K_controller_P.GetParameter7_SampleTime;
    LQR_K_controller_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      LQR_K_controller_B.cv0[i] = tmp_4[i];
    }

    LQR_K_controller_B.cv0[28] = '\x00';
    ParamGet_LQR_K_controller_98.initialize(LQR_K_controller_B.cv0);
    ParamGet_LQR_K_controller_98.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_LQR_K_controller_98.set_initial_value
      (LQR_K_con_ParameterInitialValue);

    /* End of Start for MATLABSystem: '<S1>/Get Parameter7' */

    /* Start for MATLABSystem: '<S1>/Get Parameter4' */
    LQR_K_controller_DW.obj_nc.isInitialized = 0;
    LQR_K_controller_DW.objisempty_p2 = true;
    LQR_K_controller_DW.obj_nc.SampleTime =
      LQR_K_controller_P.GetParameter4_SampleTime;
    LQR_K_controller_DW.obj_nc.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      LQR_K_controller_B.cv0[i] = tmp_3[i];
    }

    LQR_K_controller_B.cv0[28] = '\x00';
    ParamGet_LQR_K_controller_95.initialize(LQR_K_controller_B.cv0);
    ParamGet_LQR_K_controller_95.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_LQR_K_controller_95.set_initial_value
      (LQR_K_con_ParameterInitialValue);

    /* End of Start for MATLABSystem: '<S1>/Get Parameter4' */

    /* Start for MATLABSystem: '<S1>/Get Parameter5' */
    LQR_K_controller_DW.obj_e.isInitialized = 0;
    LQR_K_controller_DW.objisempty_po = true;
    LQR_K_controller_DW.obj_e.SampleTime =
      LQR_K_controller_P.GetParameter5_SampleTime;
    LQR_K_controller_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      LQR_K_controller_B.cv0[i] = tmp_2[i];
    }

    LQR_K_controller_B.cv0[28] = '\x00';
    ParamGet_LQR_K_controller_96.initialize(LQR_K_controller_B.cv0);
    ParamGet_LQR_K_controller_96.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_LQR_K_controller_96.set_initial_value
      (LQR_K_con_ParameterInitialValue);

    /* End of Start for MATLABSystem: '<S1>/Get Parameter5' */

    /* Start for MATLABSystem: '<S1>/Get Parameter6' */
    LQR_K_controller_DW.obj_j1.isInitialized = 0;
    LQR_K_controller_DW.objisempty_e = true;
    LQR_K_controller_DW.obj_j1.SampleTime =
      LQR_K_controller_P.GetParameter6_SampleTime;
    LQR_K_controller_DW.obj_j1.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      LQR_K_controller_B.cv0[i] = tmp_1[i];
    }

    LQR_K_controller_B.cv0[28] = '\x00';
    ParamGet_LQR_K_controller_97.initialize(LQR_K_controller_B.cv0);
    ParamGet_LQR_K_controller_97.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_LQR_K_controller_97.set_initial_value
      (LQR_K_con_ParameterInitialValue);

    /* End of Start for MATLABSystem: '<S1>/Get Parameter6' */

    /* Start for MATLABSystem: '<S1>/Get Parameter8' */
    LQR_K_controller_DW.obj_p.isInitialized = 0;
    LQR_K_controller_DW.objisempty_d = true;
    LQR_K_controller_DW.obj_p.SampleTime =
      LQR_K_controller_P.GetParameter8_SampleTime;
    LQR_K_controller_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      LQR_K_controller_B.cv0[i] = tmp_0[i];
    }

    LQR_K_controller_B.cv0[28] = '\x00';
    ParamGet_LQR_K_controller_99.initialize(LQR_K_controller_B.cv0);
    ParamGet_LQR_K_controller_99.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_LQR_K_controller_99.set_initial_value
      (LQR_K_con_ParameterInitialValue);

    /* End of Start for MATLABSystem: '<S1>/Get Parameter8' */

    /* Start for Atomic SubSystem: '<S4>/Publish' */
    /* Start for MATLABSystem: '<S14>/SinkBlock' */
    LQR_K_controller_DW.obj_m.isInitialized = 0;
    LQR_K_controller_DW.objisempty = true;
    LQR_K_controller_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      tmp_b[i] = tmp[i];
    }

    tmp_b[19] = '\x00';
    Pub_LQR_K_controller_24.createPublisher(tmp_b,
      LQR_K_controlle_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S14>/SinkBlock' */
    /* End of Start for SubSystem: '<S4>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<S2>/Subscribe' */

  /* SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem' */
  LQR_K_con_EnabledSubsystem_Init(&LQR_K_controller_B.EnabledSubsystem,
    &LQR_K_controller_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem' */

  /* End of SystemInitialize for SubSystem: '<S2>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<S2>/Subscribe1' */

  /* SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem' */
  LQR_K_con_EnabledSubsystem_Init(&LQR_K_controller_B.EnabledSubsystem_f,
    &LQR_K_controller_P.EnabledSubsystem_f);

  /* End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem' */

  /* End of SystemInitialize for SubSystem: '<S2>/Subscribe1' */
}

/* Model terminate function */
void LQR_K_controller_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<S2>/Subscribe' */
  /* Terminate for MATLABSystem: '<S8>/SourceBlock' */
  if (LQR_K_controller_DW.obj_l.isInitialized == 1) {
    LQR_K_controller_DW.obj_l.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S8>/SourceBlock' */
  /* End of Terminate for SubSystem: '<S2>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<S2>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S9>/SourceBlock' */
  if (LQR_K_controller_DW.obj_nl.isInitialized == 1) {
    LQR_K_controller_DW.obj_nl.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S9>/SourceBlock' */
  /* End of Terminate for SubSystem: '<S2>/Subscribe1' */

  /* Terminate for MATLABSystem: '<S1>/Get Parameter3' */
  if (LQR_K_controller_DW.obj.isInitialized == 1) {
    LQR_K_controller_DW.obj.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Get Parameter3' */

  /* Terminate for MATLABSystem: '<S1>/Get Parameter' */
  if (LQR_K_controller_DW.obj_h.isInitialized == 1) {
    LQR_K_controller_DW.obj_h.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Get Parameter' */

  /* Terminate for MATLABSystem: '<S1>/Get Parameter1' */
  if (LQR_K_controller_DW.obj_n.isInitialized == 1) {
    LQR_K_controller_DW.obj_n.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Get Parameter1' */

  /* Terminate for MATLABSystem: '<S1>/Get Parameter2' */
  if (LQR_K_controller_DW.obj_j.isInitialized == 1) {
    LQR_K_controller_DW.obj_j.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Get Parameter2' */

  /* Terminate for MATLABSystem: '<S1>/Get Parameter7' */
  if (LQR_K_controller_DW.obj_f.isInitialized == 1) {
    LQR_K_controller_DW.obj_f.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Get Parameter7' */

  /* Terminate for MATLABSystem: '<S1>/Get Parameter4' */
  if (LQR_K_controller_DW.obj_nc.isInitialized == 1) {
    LQR_K_controller_DW.obj_nc.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Get Parameter4' */

  /* Terminate for MATLABSystem: '<S1>/Get Parameter5' */
  if (LQR_K_controller_DW.obj_e.isInitialized == 1) {
    LQR_K_controller_DW.obj_e.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Get Parameter5' */

  /* Terminate for MATLABSystem: '<S1>/Get Parameter6' */
  if (LQR_K_controller_DW.obj_j1.isInitialized == 1) {
    LQR_K_controller_DW.obj_j1.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Get Parameter6' */

  /* Terminate for MATLABSystem: '<S1>/Get Parameter8' */
  if (LQR_K_controller_DW.obj_p.isInitialized == 1) {
    LQR_K_controller_DW.obj_p.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Get Parameter8' */

  /* Terminate for Atomic SubSystem: '<S4>/Publish' */
  /* Terminate for MATLABSystem: '<S14>/SinkBlock' */
  if (LQR_K_controller_DW.obj_m.isInitialized == 1) {
    LQR_K_controller_DW.obj_m.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S14>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S4>/Publish' */
}

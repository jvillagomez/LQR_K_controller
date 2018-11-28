#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block LQR_K_controller/Position Difference/Subscribe
extern SimulinkSubscriber<geometry_msgs::Pose2D, SL_Bus_LQR_K_controller_geometry_msgs_Pose2D> Sub_LQR_K_controller_6;

// For Block LQR_K_controller/Position Difference/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Pose2D, SL_Bus_LQR_K_controller_geometry_msgs_Pose2D> Sub_LQR_K_controller_7;

// For Block LQR_K_controller/Velocities Publisher/Publish
extern SimulinkPublisher<geometry_msgs::Pose2D, SL_Bus_LQR_K_controller_geometry_msgs_Pose2D> Pub_LQR_K_controller_24;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_91;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_92;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_93;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_94;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_95;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_96;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_97;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_98;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_99;

void slros_node_init(int argc, char** argv);

#endif

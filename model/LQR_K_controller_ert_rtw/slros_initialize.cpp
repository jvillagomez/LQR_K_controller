#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "LQR_K_controller";

// For Block LQR_K_controller/Position Difference/Subscribe
SimulinkSubscriber<geometry_msgs::Pose2D, SL_Bus_LQR_K_controller_geometry_msgs_Pose2D> Sub_LQR_K_controller_6;

// For Block LQR_K_controller/Position Difference/Subscribe1
SimulinkSubscriber<geometry_msgs::Pose2D, SL_Bus_LQR_K_controller_geometry_msgs_Pose2D> Sub_LQR_K_controller_7;

// For Block LQR_K_controller/Velocities Publisher/Publish
SimulinkPublisher<geometry_msgs::Pose2D, SL_Bus_LQR_K_controller_geometry_msgs_Pose2D> Pub_LQR_K_controller_24;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_91;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_92;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_93;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_94;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_95;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_96;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_97;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_98;

// For Block LQR_K_controller/Get K_gain ROSparam/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_LQR_K_controller_99;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


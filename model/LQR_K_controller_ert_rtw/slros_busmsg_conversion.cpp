#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_LQR_K_controller_geometry_msgs_Pose2D and geometry_msgs::Pose2D

void convertFromBus(geometry_msgs::Pose2D* msgPtr, SL_Bus_LQR_K_controller_geometry_msgs_Pose2D const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose2D");

  msgPtr->theta =  busPtr->Theta;
  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
}

void convertToBus(SL_Bus_LQR_K_controller_geometry_msgs_Pose2D* busPtr, geometry_msgs::Pose2D const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose2D");

  busPtr->Theta =  msgPtr->theta;
  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
}


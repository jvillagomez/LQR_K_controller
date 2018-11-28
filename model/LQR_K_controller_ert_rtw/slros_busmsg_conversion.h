#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>
#include "LQR_K_controller_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Pose2D* msgPtr, SL_Bus_LQR_K_controller_geometry_msgs_Pose2D const* busPtr);
void convertToBus(SL_Bus_LQR_K_controller_geometry_msgs_Pose2D* busPtr, geometry_msgs::Pose2D const* msgPtr);


#endif

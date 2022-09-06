#include "ros/ros.h"
#include "std_msgs/Float64.h"

#include <math.h>

int main (int argc, char **argv) {
	ros::init(argc, argv, "rotate");
	ros::NodeHandle nh;
	ros::Rate loop_rate(10);
	ros::Time startTime = ros::Time::now();
	while(ros::ok()) {
		std_msgs::Float64 msg_to_send;
		msg_to_send.data = 0.5;
		pub3_publish(msg_to_send);
        ROS_INFO("ismoving goalpos to zero");
        ros::spinOnce();
        loop_rate.sleep();
	}
}

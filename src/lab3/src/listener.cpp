#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "std_msgs/String.h"

#include <math.h>

bool turnLeft = true;
int prevNum = -1;
ros::Publisher pub3;
ros::Rate loop_rate;

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
	int num = std::stoi(msg->data.c_str());
	if(num > prevNum) {
		
		std_msgs::Float64 msg_to_send;
		int angle = 1;
		if (turnLeft) {
			angle = -angle;
		}
		msg_to_send.data = angle;
		pub3.publish(msg_to_send);
		ROS_INFO("ismoving goalpos to zero");
		turnLeft = !turnLeft;
	}
	prevNum = num;
	ros::spinOnce();
	loop_rate.sleep();
}


int main (int argc, char **argv) {
	ros::init(argc, argv, "listener rotater");
	ros::NodeHandle nh;
 	ros::Subscriber sub = nh.subscribe("chatter", 1000, chatterCallback);

	loop_rate = ros::Rate(1);

	pub3 = nh.advertise<std_msgs::Float64>("/joint4/command", 100);
}

#include "ros/ros.h"
#include "std_msgs/String.h"



int main(int argc ,char *argv[])
{
    //初始化节点
    ros::init(argc,argv,"send");

    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<std_msgs::String>("try_211",20);

    std_msgs::String msg;

    while (ros::ok())
    {
        msg.data = "hello";
        pub.publish(msg);

    }

    return 0;
}
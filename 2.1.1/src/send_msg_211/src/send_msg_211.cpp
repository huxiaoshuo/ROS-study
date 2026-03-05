#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>


int main(int argc ,char *argv[])
{
    setlocale(LC_ALL,"");
    //初始化节点
    ros::init(argc,argv,"send");
    //创建节点句柄
    ros::NodeHandle nh;
    //创建发布者对象
    ros::Publisher pub = nh.advertise<std_msgs::String>("send_211",10);
    //发布数据与发布逻辑
    std_msgs::String msg;
    //1hz
    ros::Rate rate(1);
    //设置编号
    int count = 0;
    while (ros::ok())
    {
        count ++;
        //msg.data = "hello";
        //发送信息拼接

        std::stringstream ss;
                
        ss << "hello  --->" << count;
        msg.data = ss.str();
        pub.publish(msg);
        rate.sleep();

        //添加日至
        ROS_INFO ("发布的数据是:%s",ss.str().c_str());
    }

    return 0;
}

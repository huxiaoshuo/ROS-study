#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

void domsg(const std_msgs::String::ConstPtr &msg)
{
    ROS_INFO("msg_get:%s",msg->data.c_str());
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"sub_221");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("send_211",10,domsg);
    ros::spin();



    return 0;
}


#include "ros/ros.h"            // 【目的】引入ROS核心库。 【操作】包含该头文件以使用节点、句柄等基础API。
#include "std_msgs/String.h"   // 【目的】引入标准消息类型。 【操作】包含String消息定义，以便处理文本数据。
#include <sstream>

/**
 * 步骤 1：定义回调函数
 * 【目的】设置消息处理逻辑。当订阅的话题有新消息到达时，ROS会自动调用此函数。
 * 【操作】函数参数必须是常量的共享指针（ConstPtr），指向接收到的消息对象。
 */
void domsg(const std_msgs::String::ConstPtr &msg)
{
    // 使用 ROS_INFO 打印接收到的数据。msg->data.c_str() 是将ROS字符串转换为C风格字符串。
    ROS_INFO("msg_get:%s", msg->data.c_str());
}

// int main(int argc, char *argv[])
// {
//     // 步骤 2：初始化环境
//     // 【目的】解决日志输出中的中文乱码问题（如果消息包含中文）。
//     // 【操作】调用 C 语言的标准本地化设置。
//     setlocale(LC_ALL,"");

//     /**
//      * 步骤 3：初始化 ROS 节点
//      * 【目的】向 ROS Master 注册节点，并命名。
//      * 【操作】调用 init 函数，"sub_221" 是该节点在网络中的唯一名称。
//      */
//     ros::init(argc, argv, "sub_221");

//     /**
//      * 步骤 4：实例化节点句柄
//      * 【目的】句柄是该节点与 ROS 系统通信的入口。
//      * 【操作】创建 ros::NodeHandle 对象，用于后续订阅、发布等操作。
//      */
//     ros::NodeHandle nh;

//     /**
//      * 步骤 5：实例化订阅者对象
//      * 【目的】告诉 ROS 我们要监听哪个话题，以及收到消息后找谁处理。
//      * 【操作】使用 nh.subscribe()，参数依次为：
//      * 1. "send_211"：订阅的话题名称。
//      * 2. 10：队列长度（缓冲区大小）。若处理太慢，最新的10条消息会被保留。
//      * 3. domsg：回调函数的名称。
//      */
//     ros::Subscriber sub = nh.subscribe("send_211", 10, domsg);

//     /**
//      * 步骤 6：循环监听（自旋）
//      * 【目的】让程序进入阻塞状态，持续等待并处理回调函数。
//      * 【操作】调用 ros::spin()。如果没有这一行，main函数会直接运行到 return 0 并退出，节点就无法接收消息。
//      */
//     ros::spin();

//     return 0;
// }

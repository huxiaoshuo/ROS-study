#include "ros/ros.h"

int main (int argc , char *argv[])
{
    ros::init(argc , argv, "hello");
    setlocale(LC_ALL,"");
    ROS_INFO("HAHA,哈哈哈");
    ROS_INFO("WHAT?");

    return 0;
}

//输入中文解决乱麻问题 setlocale(LC_ALL,"");

/*   
// 包含ROS的核心头文件，提供了ROS节点编程所需的基本功能（如初始化、日志输出等）
#include "ros/ros.h"

// ROS节点的主函数，程序的入口
// argc: 命令行参数的个数
// argv: 命令行参数的字符串数组
int main (int argc , char *argv[])
{
    // 初始化ROS节点
    // 参数说明：
    // argc, argv: 传递命令行参数给ROS初始化函数
    // "hello": 节点的名称，在ROS网络中唯一标识这个节点
    ros::init(argc , argv, "hello");

    // 使用ROS_INFO宏输出INFO级别的日志信息，内容为"HAHA"
    // ROS日志有不同级别：DEBUG, INFO, WARN, ERROR, FATAL，INFO是普通信息级别
    ROS_INFO("HAHA");
    
    // 继续输出另一条INFO级别的日志信息，内容为"WHAT?"
    ROS_INFO("WHAT?");

    // 主函数正常退出，返回0表示程序执行成功
    return 0;
}
*/

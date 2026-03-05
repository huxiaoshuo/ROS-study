import rospy
from std_msgs.msg import String


if __name__ == "__main__":

    rospy.init_node("pub_231")
    pub = rospy.Publisher("msg_231",String,queue_size=10)
    msg = String()
    while not rospy.is_shutdown():
        msg.data = "hello"
        pub.publish(msg)
pass
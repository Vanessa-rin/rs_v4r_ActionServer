/**
 * Action Server for Object data that the hsr perception module has observed
 * @author  Vanessa Hassouna (hassouna@uni-bremen.de)
 */


#include <PerceptionActionServer.h>

using namespace suturo_perception_msgs;


PerceptionActionServer::PerceptionActionServer(std::string &name, std::string pipeline, std::string savePath) :

    action_name(name),
    pm(nh, savePath, name)
{
        ROS_INFO("Initializing RoboSherlock...");
        pm.init(pipeline);
}

PerceptionActionServer::PerceptionActionServer(std::string &name, std::string pipeline) :

        action_name(name),
        pm(nh, name)
{
    ROS_INFO("Initializing RoboSherlock...");
    pm.init(pipeline);
}







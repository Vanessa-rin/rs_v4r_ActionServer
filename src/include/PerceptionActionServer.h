/**
 * Action Server for Object data that the hsr perception module has observed
 * @author  Vanessa Hassouna (hassouna@uni-bremen.de)
 */

#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <actionlib/server/action_server.h>
#include <suturo_perception_msgs/ObjectDetectionData.h>
#include <suturo_perception_msgs/ExtractObjectInfoAction.h>
#include <suturo_perception_msgs/AnalyzeShelfStatusAction.h>

#include <rs_v4r/v4rProcessManager.h>

using namespace suturo_perception_msgs;

class PerceptionActionServer {

protected:
    ros::NodeHandle nh;
    std::string action_name;
    v4rProcessManager pm;


public:
    PerceptionActionServer(std::string &name, std::string pipeline, std::string savePath);
    PerceptionActionServer(std::string &name, std::string pipeline);

    ~PerceptionActionServer(){};
};

class ObjectInformationServer : PerceptionActionServer {
protected:
    actionlib::SimpleActionServer<ExtractObjectInfoAction> server;
    ExtractObjectInfoFeedback feedback;
    ExtractObjectInfoResult result;

public:
    ObjectInformationServer(std::string name, std::string savePath);
    void execute(const ExtractObjectInfoGoalConstPtr &goal);
};

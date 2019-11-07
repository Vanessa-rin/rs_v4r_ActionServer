/**
 * Main module for perception
 * Creates Action servers for all perception pipelines
 * Initializes RoboSherlock
 * @author  Vanessa Hassouna (hassouna@uni-bremen.de)
 */

#include <ros/ros.h>
#include <PerceptionActionServer.h>

int main(int argc, char** argv) {
   ros::init(argc, argv, "rs_v4r_ActionServer");
   ros::MultiThreadedSpinner spinner(4);
   ObjectInformationServer object_info_server("extract_object_infos", "/home//temp");
   spinner.spin();

   return 0;

}

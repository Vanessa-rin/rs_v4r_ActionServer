# rs_v4r_ActionServer
This package provides an executable that runs all modules for the perception. It includes action servers running specific pipelines in [RoboSherlock](https://github.com/Suturo1819/robosherlock). 

## Dependencies
The package depends on the follwoing packages
* [RoboSherlock](https://github.com/Suturo1819/robosherlock "robosherlock")
* [The rs_v4r RoboSherlock Package](https://github.com/Vanessa-rin/rs_v4r "rs_v4r")
* [Suturo Perception Msgs](https://github.com/Suturo1819/suturo_msgs/tree/master/suturo_perception_msgs "suturo_perception_msgs")
* actionlib
* geometry msgs

## Installation
Make sure that you have **RoboSherlock installed**. If that is the case, a simple `catkin build` is enough

## Usage
To start the module, type
`rosrun rs_v4r_ActionServer perception_server`

This starts all action servers handling requests for the perception module. As a server is started, an individual [RoboSherlock](https://github.com/Suturo1819/robosherlock) instance is created. The pipeline associated with the instance will be processed as soon as an action client sends a request to the specific server.

### Actions
Currently there is on actions and their respective server defined:
* `ExtractObjectInformation`
For futher detail please look at the [actions](https://github.com/Suturo1819/suturo_msgs/tree/master/suturo_perception_msgs/action) defined in the [suturo_msgs](https://github.com/Suturo1819/suturo_msgs).

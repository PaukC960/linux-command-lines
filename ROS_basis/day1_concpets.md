# ROS2 - Robot Operating System

## Core Concepts

Robotics engineering = software + hardware
ROS2 : an operatind system that handles the software
     : controversial for very controlling framework 	

  - Node : a single running program that performs one task
     - A node can either be a publisher, a subsciber or both.
  - Topic : a named communication channel for streaming data
  - Message : the data structure that is sent over a topic
  - Publisher : a node that sends data
  - Subscriber : a node that receives data
  - DDS : Data Distribution System that connects different systems, micro-controller, sensors, motors, cameras, etc.
  - Analogy : 
     - node = one small robot brain
     - topic = wires between robots


ROS control robots by creating mulitple nodes that communicate using messages.
For example,
  - Camera node publishes image data
  - Controller node subscribes to images
  - Controller node publisheds motor commands
  - Motor node subscribes to commands 


## Command Lines
  - ros2 node list : show all active nodes
  - ros2 topic list : show all active channels
  - ros2 topic echo : prints messages running on a topic

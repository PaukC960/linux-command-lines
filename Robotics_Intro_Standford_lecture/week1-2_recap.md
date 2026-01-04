# Week 1-2 Recap Questions

1. What is the difference between Joint Space vs Cartesian Space?
   - Joint Space : the position of a joint relative to the previous joint (local frame)
   - Cartesian Space : the position of a joint/ the end-effector relative to the base or a global frame

2. What does forward kinematics compute?
   - Forward kinematics is the computation of the configuration of the end-effector by the compounded movements of all joints.

3. Why do robots use coordinate frames?
   - Robots use coordinate frames to find the relative positions of its joints, orientations, and movements. While the joints move relative to the previous joint, coordinate frames are essential to determine the position of the end-effector. Besides, robots have sensors and tools and their data which is stored relative to the local frames. A global frame is used to transfrom measurements between different perspectives, perform kinematic calcualtions, and execute precise movements in the real world.

4. What problem do Euler angles have?
   - At -90 and 90 degrees, two joints become parallel and lose one DOF which is called Gimbal lock or singularity.

5. Why do we pass objects as const &?
   - For better efficiency. When we pass an argument, the function creates a copy which can be tedious. But & references to the argument itself and const causes the argument immutable. 

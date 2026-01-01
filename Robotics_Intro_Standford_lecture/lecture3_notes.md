# Robotics Lecture 3

## Key Idea
Derivation for Rotation Matrix
Euler angles & fixed angles

## Key Concepts
1. Euler Angles
	- Euler angles describe 3D orientation using three sequential rotations around coordinates axes, but the rotation order matters and the drawback is the gimbal lock
		- pitch (rotation around x-axis)
		- roll (around y-axis)
		- yaw (around z-axis)
		- order dependent (always z-y-x rotation)
	- Gimbal lock (singularity)
		- in inverse matrix, the calculation includes division with cosine which means cos(90) = 0 -> undefined
		- two rotation axes align
		- one DOF is lost
		- orientation becomes unstable 
	- Humans prefer Euler angles for intuition, while robots convert them to rotation matrics or quaternions for computation. 

2. Fixed vs Euler Angles
	- Euler angles rotate around the current, moving axes - the axes move with the object after each rotation.
	- Fixed angles rotate arount the original world axes, which never move.
	- If the angles and the rotation order are the same, the final orientation is different
	- Euler angles
		- Rotate 90° around Z -> Y-axis moves
		- Rotate 90° around Y -> rotate on the changed position of the Y-axis
	- Fixed angles 
		- Rotate 90° around Z 
		- Rotate 90° around Y -> rotate on the original position (world position) o  Y-axis
3. Key relation between Fixed and Euler angles
	- Z-Y-X Euler rotation is mathematically equivalent to an X-Y-Z fixed rotation (due to transpose of 3x3 matrices)
	- Rotating about moving axes in one order = rotating about fixed axes in reverse order

## Connection to Robotics
	- Euler angles are intuitive for humans to change the orientation of robotic joints
	- Robots need fixed angles to configure its position to a global fixed point.

## Confusing parts
	- Formula derivations
	- Applications to robotic commands


#include <iostream>

using namespace std;

class RobotArm {
private:
	// static -> makes the variable belong to the class, not to a particular object, less messy
	// const -> immutable
	static const int  NUM_JOINTS = 3;
	static const int MIN_ANGLE_LIMIT = 0;
	static const int MAX_ANGLE_LIMIT = 90;
	int joints[NUM_JOINTS];

public:
	RobotArm();
	void SetJoint (int index, int angle);
	void isSafe() const;
	void PrintJoint();
};	

RobotArm::RobotArm() {
	for (int i=0; i<NUM_JOINTS; i++) {
		joints[i] = 0;
	}
}

void RobotArm::SetJoint (int index, int angle) {
	if (index >= 0 && index < NUM_JOINTS) {
		joints[index] = angle;
	}
}

void RobotArm::isSafe() const {
	for (int i=0; i<NUM_JOINTS; i++) {
		if (joints[i] < MIN_ANGLE_LIMIT || joints[i] > MAX_ANGLE_LIMIT) {
			cout << "WARNING: Angle limit exceeded" << endl;
		}
	}
}

void RobotArm::PrintJoint() {
	for (int i=0; i<NUM_JOINTS; i++) {
		cout << "Joint " << i+1 << " degree: " << joints[i] << endl;
	}
}

int main() {
	RobotArm robotArm;
	robotArm.SetJoint (0, 55);
	robotArm.SetJoint (1, 34);
	robotArm.SetJoint (2, 78);
	robotArm.SetJoint (3, 65);

	robotArm.isSafe();
	robotArm.PrintJoint();
	
	return 0;
}

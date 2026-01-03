#include <iostream>

using namespace std;

struct Robot {
private:
	double joints[3];
	double avgJointAngle;

public: 
	void SetJoints();
	int GetJoints(int i) const;
	void PrintJoints() const;
	double AverageJointAngle();
};

void Robot::SetJoints() {
	cout << "Enter 3 joint angles: \n";
	for (int i=0; i<3; i++) {
		cin >> joints[i];
	}
	cout << endl;
}

int Robot::GetJoints(int i) const {
	return joints[i];
}

void Robot::PrintJoints() const {
	cout << "Joint angle states: \n";
	for (int i=0; i<3; i++) {
		cout << "Joint " << i+1 << ": " << joints[i] << " degrees" << endl;
	} 
}

double Robot::AverageJointAngle() {
	double sum=0;
	for (int i=0; i<3; i++) {
		sum += joints[i];
	}
	avgJointAngle = sum/3.0;
	return avgJointAngle;
}

bool isSafe (const Robot& robot) {
	for (int i=0; i<3; i++) {
		if (robot.GetJoints(i)<0 || robot.GetJoints(i)>90) {
			return false;
		}
	}
	return true;
}

int main() {
	Robot robotArmJoint;
	robotArmJoint.SetJoints();
	robotArmJoint.PrintJoints();
	cout << "The average angle of end-effector: " << robotArmJoint.AverageJointAngle() << endl;
	if (!isSafe(robotArmJoint)) {
		cout << "WARNING: Joint Limit Exceeded!!!" << endl;
	}		
}

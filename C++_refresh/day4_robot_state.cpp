#include <iostream>
using namespace std;

int main() {
	int joints[3];
	
	cout << "Enter 3 joint angles: ";
	for (int i=0; i<3; i++) {
		cin >> joints[i];
	}

	cout << "\nRobot joint state:\n";
	for (int i=0; i<3; i++) {
		cout << "Joint " << i+1 << ": " << joints[i] << " degrees\n";
	}
	
	int sum=0;
	for (int i=0; i<3; i++) {
		sum += joints[i];
	}

	if (sum > 120) {
		cout << "End-effector: Extended\n";
	} else {
		cout << "End-effector: Retracted\n";
	}
	
	bool safe = true;
	for (int i=0; i<3; i++) {
		if (joints[i] < 0 || joints[i] > 90) {
			safe = false;
		}
	}

	if (!safe) {
		cout << "WARNING: Joint limit exceeded\n";
	}
	
	return 0;
}

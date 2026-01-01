#include <iostream>
using namespace std;

double ComputeAvg (int joints[], int size) {
	double sum;
	for (int i=0; i<size; i++) {
		sum += joints[i];
	}
	return sum/(double)size;
}

int main() {
	int joints[3];

	cout << "Enter 3 joint angles (degrees): " << endl;
	for (int i=0; i<3; i++) {
		cin >> joints[i];
	}
	
	cout << "\nJoint configuration:\n";
	for (int i=0; i<3; i++) {
		if (joints[i] > 90) {
			cout << "Joint limit exceeded!\n";
		}
		cout << "Joint " << i+1 << ": " << joints[i] << " degrees\n";
	}
	
	double avg;
	avg = ComputeAvg (joints, 3);
	cout << "\nAverage joint angle: " << avg << endl;
	if (avg > 45) {
		cout << "Status: High extension\n";
	} else {
		cout << "Status: Safe configuration\n";
	}

	return 0;
}

#include <iostream>
using namespace std;

int add (int a, int b) {
	return a+b;
}

double average (int a, int b, int c) {
	double  average = (a+b+c)/3.0;
	return average;
}


int main() {
/*
	string name;
	cout << "Enter your name: " << endl;
	cin >> name;
	cout << "Hello, " << name << "!\n";

	for (int i=0; i <= 5; i++) {
		cout << "Contral loop iteration: " << i << endl;
	}

	int distance;
	cout << "Enter the distace to obstacle (cm): ";
	cin >> distance;

	if (distance < 20) {
		cout << "Too close! Stop.\n";
	} else {
		cout << "Safe. Keep moving. \n";
	}


	cout << add (4, 3) << endl;
	int x = 4, y = 6;
	cout << add (x, y) << endl;
*/

	int x, y, z;
	cout << "Type in 3 angles: ";
	cin >> x >> y >> z;
	cout << average (x, y, z) << endl;
		
	return 0;
}


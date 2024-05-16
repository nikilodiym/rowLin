#include <iostream>
#include <string>
using namespace std;


int main() {
	int a, b, num;
	cout << "Enter first numbers: ";
	cin >> a;
	cout << "Enter second numbers: ";
	cin >> b;

	if (a >= b) {
		cout << "Error(( firts number must be greater than the second!!" << endl;
		cin >> num;
	}
	cout << "Enter the number: ";
	cin >> num;

	while (num < a || num > b) {
		cout << "This number is out of range. Please try again!" << endl;
		cout << "Enter the new number: ";
		cin >> num;
	}

	cout << "Nice job, this number in range!     Range [" << a << ", " << b << "]" << endl;

	system("pause");
	return 0;
}
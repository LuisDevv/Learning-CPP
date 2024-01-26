#include <iostream>

using namespace std;


int main() {

	int age = 0;
	cout << "Enter your age!: ";
	cin >> age;

	/*if (age <= 17) {
		cout << "youre under 18!" << endl;
	} else {
		cout << "youre over 18!" << endl;
	}*/

	//cout << (age >= 18 ? "Grown ass man\n" : "child :trol:\n");

	swtch(age) {
	case 0:
		cout << "0" << endl;
		break;
	case 1:
		cout << "1" << endl;
		break;
	case 2:
		cout << "2" << endl;
		break;
	default:
		cout << "age not detected" << endl;
		break;
	}

	system("PAUSE");

	return 0;
}

// im sick cant learn today

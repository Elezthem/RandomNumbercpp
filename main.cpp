#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	srand(time(NULL));
	int random_number = 1 + rand() % 15;
	bool stop = false;
	int user_inp;

	do {
		cout << "Enter number: ";
		cin >> user_inp;
		if (user_inp != random_number)
			cout << "You lose ";
		else
			stop = true;
	} while (!stop);

	cout << "You Win!";

	return 0;
}
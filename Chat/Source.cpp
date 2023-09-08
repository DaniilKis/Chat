#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool run = true;
	while (run)
	{
		string message = "";
		cout << "Введите команду: ";
		cin >> message;

		if (message == "Привет") {
			cout << "Привет, кожанный мешок" << endl;
		}

		if (message == "Пока") {
			cout << "Пока, человек" << endl;
			run = false;
		}
	}

	return 0;
}

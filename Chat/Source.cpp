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
		cout << "������� �������: ";
		cin >> message;

		if (message == "������") {
			cout << "������, �������� �����" << endl;
		}

		if (message == "����") {
			cout << "����, �������" << endl;
			run = false;
		}
	}

	return 0;
}

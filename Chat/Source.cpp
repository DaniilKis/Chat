#include <iostream>
#include <string>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	const int n = 2;
	string rep[] = {
		"� �� ���� �������",
		"������� �� ����������"

	};

	bool run = true;
	while (run)
	{
		string message = "";
		cout << "������� �������: ";
		cin >> message;
		int indexRandom = rand() % size(rep);

		if (message == "������") {
			cout << "������, �������� �����" << endl;
		} 
		else if (message == "����") {
			cout << "����, �������" << endl;
			run = false;
		}
		else
		{
			cout << rep[indexRandom] << endl;
		}		
	}

	return 0;
}

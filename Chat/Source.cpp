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
		"Я не знаю команды",
		"Команда не распознана"

	};

	bool run = true;
	while (run)
	{
		string message = "";
		cout << "Введите команду: ";
		cin >> message;
		int indexRandom = rand() % size(rep);

		if (message == "Привет") {
			cout << "Привет, кожанный мешок" << endl;
		} 
		else if (message == "Пока") {
			cout << "Пока, человек" << endl;
			run = false;
		}
		else
		{
			cout << rep[indexRandom] << endl;
		}		
	}

	return 0;
}

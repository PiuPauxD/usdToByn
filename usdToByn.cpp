/*Задание:
Пусть курс 1 USD = 3.25 BYN.
Попроси пользователя ввести сумму в долларах и посчитай, сколько это будет в BYN.*/

#include <iostream>

using namespace std;

double const USD_TO_BYN = 3.25;

double userInput(double& value);
double convert(double& value);

int main() {
	system("chcp 1251");

	double usd, BYN;
	char again = 'y';

	while (again == 'y') {
		userInput(usd);
		BYN = convert(usd);
		cout << usd << "$ = " << BYN << " BYN" << endl;
		cout << "Выполнить ещё конвертацию?(y/n): "; cin >> again;
	}

	return 0;
}

double userInput(double& value) {
	cout << "Введите значение в USD: "; cin >> value;
	return value;
}

double convert(double& value) {
	double byn = USD_TO_BYN * value;
	return byn;
}
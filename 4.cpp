#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int num;
	bool prime_check = true;

	cout << "Введите число: ";

	cin >> num;

	for (int i = 2; i < num; i++)
		if (num % i == 0) {
			prime_check = false;
			break;
		}

	if (prime_check && num != 2)
		cout << "Это простое число";
	else
		cout << "Это не простое число";
}
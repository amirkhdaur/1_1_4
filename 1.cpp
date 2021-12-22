#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, sum;

	cout << "Введите 2 числа: ";

	cin >> a >> b;

	sum = a + b;

	if (sum >= 10 && sum <= 20)
		cout << "true";
	else
		cout << "false";
}
#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n, m;

	cout << "Введите 2 числа: ";

	cin >> n >> m;

	if ((n == m && n == 10) || n + m == 10)
		cout << "true";
	else
		cout << "false";
}
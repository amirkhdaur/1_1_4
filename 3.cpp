#include <iostream>
using namespace std;

int main()
{
	cout << "Your numbers: ";

	for (int i = 1; i < 50; i++) {
		bool check = true;

		for (int j = 2; j < i; j++)
			if (i % j == 0) {
				check = false;
				break;
			}

		if(check && i != 2)
			cout << i << " ";
	}
}
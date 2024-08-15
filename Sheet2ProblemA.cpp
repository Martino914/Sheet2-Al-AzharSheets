
#include <iostream>

using namespace std;

bool ValidateNumberInBetween(int number, int from, int to) {
    return (number >= from && number <= to);
}

int ReadNumberInRange(string message, int from, int to) {
	int number;

	do
	{
		cout << message;
		cin >> number;

	} while (!ValidateNumberInBetween(number, from, to));

	return number;
}

int main()
{
	int number = ReadNumberInRange("enter number : ", 1, 1000);

	for (int i = 1; i <= number; i++) {
		cout << i << endl;
	}

}

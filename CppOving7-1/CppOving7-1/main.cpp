#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int tall(int x);

int main() {
	int inn;

	while (true)
	{
		cout << "Skriv inn ett tall \nEller 0 for å avslutte. \n";

		cin >> inn;

		if (inn <= 0) {
			return 0;
		}

		tall(inn);

		cout << endl;
	}

	system("PAUSE");

	return 0;
}

int tall(int x) {
	int y;
	int res = 0;

	string tekst;

	while (x > 0) {
		y = x % 10;
		res = res + y;
		int z = x % 10;
		x = x / 10;

		tekst += to_string(z) + " ";

		cout << "Du skrev: " << z << "\n";
	}

	cout << "Her her tallene konvertert til en tekststring: " << tekst << " \n";

	return res;
}
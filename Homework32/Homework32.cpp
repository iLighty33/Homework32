#include <iostream>
#include <string>

using namespace std;

int func1(char number) {
	int counter = 0;
	int result = 0;
	string str;
	for (int i = 7; i >= 0; i--) {
		result += (number >> i & 1) * pow(10, i);
	}
	str = to_string(result);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '1')
			counter++;
	}
	return counter;
}

int func2(char number, int index) {
	int result = 0;
	for (int i = 7; i >= 0; i--) {
		result += (number >> i & 1) * pow(10, i);
	}
	if (((number >> index) & 1) == 1)
		return 1;
	return 0;
}

int main() {

	setlocale(LC_ALL, "Russian");

	// Задача 1

	system("color 5F");
	unsigned int N;
	cout << "Задача 1.\nВведите число: ";
	cin >> N;
	N--;
	unsigned int res = 2 << N;
	cout << "2^" << N+1 << " = " << res << endl;

	// Задача 2

	cout << "\nЗадача 2.\nВведите число N в десятичном виде: " << endl;
	cin >> N;

	cout << "Колличество единиц, которые есть в его двоичном представлении";
	cout << " : " << func1(N) << "\n";

	// Задача 3

	cout << "\nЗадача 3.\n";
	int M;
	cout << "Введите число: ";
	cin >> M;
	cout << "Введите индекс: ";
	cin >> N;
	cout << "Значение бита в двоичном представлении: ";
	cout << func2(M, N);

	return 0;
}
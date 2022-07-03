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

	// ������ 1

	system("color 5F");
	unsigned int N;
	cout << "������ 1.\n������� �����: ";
	cin >> N;
	N--;
	unsigned int res = 2 << N;
	cout << "2^" << N+1 << " = " << res << endl;

	// ������ 2

	cout << "\n������ 2.\n������� ����� N � ���������� ����: " << endl;
	cin >> N;

	cout << "����������� ������, ������� ���� � ��� �������� �������������";
	cout << " : " << func1(N) << "\n";

	// ������ 3

	cout << "\n������ 3.\n";
	int M;
	cout << "������� �����: ";
	cin >> M;
	cout << "������� ������: ";
	cin >> N;
	cout << "�������� ���� � �������� �������������: ";
	cout << func2(M, N);

	return 0;
}
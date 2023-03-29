#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

const int length = 5;
void Date() {
	int date1 = 0, date2 = 0, day1 = 0, day2 = 0, month1 = 0, month2 = 0, year1 = 0, year2 = 0;
	int number = 0;
	cout << "Первая дата\n";
	cout << "Введите год:\n";
	cin >> year1;
	if ((year1 % 4) == 0) {
		cout << "Високосный год\n";
	}
	cout << "Введите месяц (1-12):\n";
	cin >> month1;
	{
		if (month1 == 1) number = 31;
		if (month1 == 2 && ((year1 % 4) == 0)) number = 29;
		if (month1 == 2 && ((year1 % 4) != 0)) number = 28;
		if (month1 == 3) number = 31;
		if (month1 == 4) number = 30;
		if (month1 == 5) number = 31;
		if (month1 == 6) number = 30;
		if (month1 == 7) number = 31;
		if (month1 == 8) number = 31;
		if (month1 == 9) number = 30;
		if (month1 == 10) number = 31;
		if (month1 == 11) number = 30;
		if (month1 == 12) number = 31;
		cout << "Введите день 1-" << number << ":\n"; // просто вычисляет количество дней в том месяце
	}
	cin >> day1;
	day1 = number - day1;

	cout << "\n\nВторая дата\n";
	cout << "Введите год:\n";
	cin >> year2;
	if ((year2 % 4) == 0) {
		cout << "Високосный год\n";
	}
	cout << "Введите месяц (1-12):\n";
	cin >> month2;
	{
		if (month2 == 1) number = 31;
		if (month2 == 2 && ((year2 % 4) == 0)) number = 29;
		if (month2 == 2 && ((year2 % 4) != 0)) number = 28;
		if (month2 == 3) number = 31;
		if (month2 == 4) number = 30;
		if (month2 == 5) number = 31;
		if (month2 == 6) number = 30;
		if (month2 == 7) number = 31;
		if (month2 == 8) number = 31;
		if (month2 == 9) number = 30;
		if (month2 == 10) number = 31;
		if (month2 == 11) number = 30;
		if (month2 == 12) number = 31;
		cout << "Введите день 1-" << number << ":\n"; // просто вычисляет количество дней в том месяце
	}
	cin >> day2;

	int dif = 0; 
	int number1 = 0; int number2 = 0;
	{
		if (month1 == 1) number1 = 31;
		if (month1 == 2) number1 = 31 + 28;
		if (month1 == 3) number1 = 31 + 28 + 31;
		if (month1 == 4) number1 = 31 + 28 + 31 + 30;
		if (month1 == 5) number1 = 31 + 28 + 31 + 30 + 31;
		if (month1 == 6) number1 = 31 + 28 + 31 + 30 + 31 + 30;
		if (month1 == 7) number1 = 31 + 28 + 31 + 30 + 31 + 30 + 31;
		if (month1 == 8) number1 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		if (month1 == 9) number1 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		if (month1 == 10) number1 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		if (month1 == 11) number1 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		if (month1 == 12) number1 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
		if (year1 % 4 == 0) number1++;

		if (month2 == 1) number2 = 31;
		if (month2 == 2) number2 = 31 + 28;
		if (month2 == 3) number2 = 31 + 28 + 31;
		if (month2 == 4) number2 = 31 + 28 + 31 + 30;
		if (month2 == 5) number2 = 31 + 28 + 31 + 30 + 31;
		if (month2 == 6) number2 = 31 + 28 + 31 + 30 + 31 + 30;
		if (month2 == 7) number2 = 31 + 28 + 31 + 30 + 31 + 30 + 31;
		if (month2 == 8) number2 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		if (month2 == 9) number2 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		if (month2 == 10) number2 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		if (month2 == 11) number2 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		if (month2 == 12) number2 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
		if (year2 % 4 == 0) number2++;
	}
	for (int i = 0; i < year1; i++) {
		if (i % 4 == 0) {
			number1 += 366;
		}
		else {
			number1 += 365;
		}
	}
	for (int i = 0; i < year2; i++) {
		if (i % 4 == 0) {
			number2 += 366;
		}
		else {
			number2 += 365;
		}
	}
	if (number1 > number2) {
		number = number1 - number2;
	}
	else {
		number = number2 - number1;
	}
	
		cout << "Разница в " << number + 2 << " дней.\n";
}

void average(int arr[]) {
	int sum = 0;
	int count = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
		count++;
	}
	cout << "Среднее ариф: " << sum / count << endl;
}

void counter(int arr[]) {
	int zero = 0; int minus = 0; int plus = 0;

	for (int i = 0; i < length + length; i++) {
		if (arr[i] == 0) zero++;
		if (arr[i] < 0) minus++;
		if(arr[i] > 0) plus++;
	}
	cout << "Нулевых: " << zero << "\nОтрицательных: " << minus << "\nПоложительных: " << plus << endl;
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");
	cout << "Задание 1\n";
	Date();

	cout << "\n\nЗадание 2\n";
	int arr[length] = {1,2,3,4,5};
	average(arr);

	cout << "\n\nЗадание 3\n";
	int arr2[length + length] = { 1,0,0,-1,-1,0,0,10,10,2 };
	counter(arr2);

}

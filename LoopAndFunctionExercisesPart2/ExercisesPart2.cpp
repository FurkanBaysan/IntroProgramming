#include <stdio.h>
#include <iostream>
using namespace std;

void printPlusInGıvenMatrıx(int number);
void findBiggestPrimeNumber(int number);
void calculatePower(int number);
void calculateLogarithm(int number);
void studentsAgeAverage();
void printFibonacciMatrix(int length);
void printFibonacciRegardlessOfSize(int n);
void printFirstNPrimeNumbers();

int main() {

	cout << " --Kare Matris + Cizdirme --" << endl;
	int sayi;
	cout << " Kare Matrisin Boyutunu Giriniz:" << " ";
	cin >> sayi;
	printPlusInGıvenMatrıx(sayi);
	cout << endl;

	cout << "-- Find the Biggest number Less than the given number --" << endl;
	int firstNumber;
	cout << "Enter a Number:";
	cin >> firstNumber;
	findBiggestPrimeNumber(firstNumber);
	cout << endl;

	cout << "-- Take the Power of given number --" << endl;
	cout << "Enter the Number:" << " ";
	int secondNumber;
	cin >> secondNumber;
	calculatePower(secondNumber);
	cout << endl;

	cout << "-- Take the Logarithm of given number --" << endl;
	int thirdNumber;
	cout << "Enter the Number:" << " ";
	cin >> thirdNumber;
	calculateLogarithm(thirdNumber);
	cout << endl;

	cout << "-- Average age of Students --" << endl;
	studentsAgeAverage();

	cout << "-- Two Dimensional Fibonacci Matrix --" << endl;
	int length = 4;
	printFibonacciMatrix(length);

	cout << "Two Dimensional Fibonacci Matrix --" << endl;
	int dimension;
	cout << "Dimension:" << " ";
	cin >> dimension;
	printFibonacciRegardlessOfSize(dimension);
	printFirstNPrimeNumbers();


	return 0;
}

void printPlusInGıvenMatrıx(int sayi) {
	if (sayi % 2 == 1) {
		for (int i = 1; i <= sayi; i++) {

			for (int j = 1; j <= sayi; j++) {

				if (i == (sayi / 2 + 1) || (j == sayi / 2 + 1)) {
					cout << "1" << " ";
				}
				else {
					cout << "0" << " ";
				}


			}
			cout << "\n";
		}
	}
	if (sayi % 2 == 0) {
		for (int i = 1; i <= sayi; i++) {

			for (int j = 1; j <= sayi; j++) {
				if (i == (sayi / 2) || i == (sayi / 2 + 1) || j == (sayi / 2) || j == (sayi / 2 + 1)) {
					cout << "1" << " ";
				}
				else {
					cout << "0" << " ";
				}
			}
			cout << "\n";
		}
	}
}
void findBiggestPrimeNumber(int number) {
	int checkNumber = 1;

	for (int i = number; i >= 2; i--) {
		bool flag = 0;
		for (int checkNumber = 2; checkNumber <= i - 1; checkNumber++) {
			if (i % checkNumber == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cout << i << " ";
			break;
		}
	}
}
void calculatePower(int n) {

	int sonuc = 1;
	for (int power = 1; power <= n; power++) {
		sonuc = sonuc * 2;
	}
	cout << "Power of Given Number:" << sonuc;
}
void calculateLogarithm(int n) {

	int logarithmResult = 1;
	for (int i = 2; i <= n; i = i * 2) {
		logarithmResult++;
	}
	cout << "Logarithm of Given Number:" << logarithmResult;
}
void studentsAgeAverage() {

	int age = 0;
	int sum = 0;
	int average;
	int n = 0;
	cout << "Please give your age:" << " ";

	while (age != -1) {
		cin >> age;
		n++;
		sum = sum + age;
	}

	sum = sum + 1;//-1'i toplamdan çıkarıyoruz
	n = n - 1;//öğrenci sayısını 1 düşürüyoruz, -1'i alma.

	cout << "Average Age of Students:" << (float)sum / (float)n << endl;
}
void printFibonacciMatrix(int n) {

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++) {
			if (i + j == 2) {
				cout << "2" << " \t ";
			}
			else if (i + j == 3) {
				cout << "3" << " \t ";
			}
			else if (i + j == 4) {
				cout << "5" << " \t ";
			}
			else if (i + j == 5) {
				cout << "8" << " \t ";
			}
			else if (i + j == 6) {
				cout << "13" << " \t ";
			}
			else if (i + j == 7) {
				cout << "21" << " \t ";
			}
			else if (i + j == 8) {
				cout << "34" << " \t ";
			}
		}
		cout << "\n";
	}


}
void printFibonacciRegardlessOfSize(int n) {

	int a = 1;
	int b = 1;
	for (int i = 1; i <= n; i++) {
		int p = a;
		int q = b;

		for (int j = 1; j <= n; j++) {
			int r = p + q;
			cout << p << "\t ";
			p = q;
			q = r;
		}
		cout << "\n";

		int c = a + b;
		a = b;
		b = c;
	}
}
void printFirstNPrimeNumbers() {
	int n;
	int i = 3;
	int counter;
	int checkNumber;
	cout << "Enter the number of Prime Numbers" << " ";
	cin >> n;
	if (n >= 1) {
		cout << "First Prime Numbers are:" << "2 ";
	}
	for (counter = 1; counter <= n - 1; i++) {

		for (checkNumber = 2; checkNumber < i; checkNumber++) {
			if (i % checkNumber == 0)
				break;
		}
		if (checkNumber == i) {
			cout << i << " ";
			counter++;
		}
	}


}

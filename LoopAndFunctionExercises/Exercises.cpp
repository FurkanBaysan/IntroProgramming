#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	cout << "--Print your own name 5 times--" << endl;
	for (int i = 1; i <= 5; i++) {
		cout << "Furkan Baysan" << endl;
	}
	cout << "--Print between 1-10 numbers--" << endl;
	for (int i = 1; i <= 10; i = i + 1) {
		cout << i << " ";
	}
	/* -- Infinite Loop--
	for (int i = 1; i <= 10; i = i / 2) {
		cout << i << " ";
	}
	Output : 100000000000....
	*/
	cout << endl;
	cout << "-- Print between 100-50 Numbers divisible by 3 --" << endl;
	for (int i = 100; i >= 50; i--) {
		if (i % 3 == 0) {
			cout << i << " ";
		}
		else {

		}
	}
	cout << endl;
	cout << "--Inverted the Loop--" << endl;
	// 17-> number of Numbers divisible by 3 and between 100-50.
	for (int i = 0; i < 17; i++) {
		cout << 100 - 1 - (3 * i) << " ";
	}
	cout << endl;
	cout << "--Factorial--" << endl;
	int number = 6;
	int result = 1;
	for (int i = number; i >= 1; i--) {
		result = result * i;
	}
	cout << result << endl;
	cout << "-- Calculate the Sum and Average of 1-10 numbers --" << endl;
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum = sum + i;
	}
	cout << "Sum:" << sum << " " << "Average:" << sum / 10 << endl;
	cout << "-- Calculate the Sum and Average of given Numbers until given -1 --" << endl;
	int newResult = 0;//holds the sum of given Numbers from user.
	int i = 0;//holds the number of given Number from user.
	int n = 0;
	cout << "Please Enter Numbers:" << endl;
	while (n != -1) {
		cin >> n;
		if (n == -1) {
			break;
		}
		newResult = newResult + n;
		i++;
	}
	//newResult = newResult + 1;//toplamdan -1'i çıkaralım yani 1 ekleyelim.
	//i = i - 1;//eleman sayısından -1'i çıkaralım
	cout << "Sum:" << newResult << " " << "Average:" << newResult / i << endl;


	cout << "-- Nested Loop (Ic-Ice Dponguler) Exercises --" << endl;
	cout << endl;
	cout << "--Multiplication Table--" << endl;

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t ";
		}
		cout << "\n";
	}
	cout << endl;
	cout << "-- CheckerBoard Table ( Dama Tahtası ) --" << endl;
	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 10; j++) {
			if ((i + j) % 2 == 0) {
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	cout << "--Diagonal Star Pattern--" << endl;
	for (int i = 1; i <= 5; i++) {

		for (int j = 1; j <= 5; j++) {
			if ((i + j) % 6 == 0 || (i + j == 2 * i)) {
				cout << "*";
			}
			else {
				cout << " ";
			}

		}
		cout << " \n";
	}
	cout << "-- List and Find the Sum of Prime Numbers between 2-100 --" << endl;
	//int isPrimeOrNot;
	int checkNumber = 1;
	int sonuc = 0;
	for (int i = 2; i <= 100; i++) {
		bool flag = 0;
		for (int checkNumber = 2; checkNumber <= i - 1; checkNumber++) {
			if (i % checkNumber == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cout << i << endl;
			sonuc = sonuc + i;
		}
	}
	cout << endl;
	cout << "Sum of Prime Numbers:" << " " << sonuc << endl;

	return 0;
}
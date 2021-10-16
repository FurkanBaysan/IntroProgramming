#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	/*
	* 1. Kullanıcıdan bugünün tarihini ve kaç yaşında olduğunu alarak, doğum tarihini yıl olarak bulan kodu yazınız.
	*/

	int today; ; // bugünün tarihi
	int dateofBirth; //doğum tarihi
	int age;

	cout << "Please enter the today's date :";
	cin >> today;

	cout << "Please enter your date of birth :";
	cin >> dateofBirth;

	cout << endl;

	age = today - dateofBirth; // bugünün tarihinden doğum tarihi çıkartırsak yaşını buluruz.
	cout << "Your Age:" << age << endl;

	cout << "End of Question 1" << endl;
	cout << "-------------" << endl;

	/*
	* 2. Kullanıcıdan a,b,c sayılarını okuyarak aşağıdaki işlemi yapan kodu yazınız.
	*
	* a^2 + b^2+3c
	*/

	int a, b, c;

	cout << "Please enter the values of a, b and c variables:" << endl;

	cout << "a:";
	cin >> a;

	cout << "b:";
	cin >> b;

	cout << "c:";
	cin >> c;


	cout << "The Result of Equation :" << (a * a) + (b * b) + c * 3 << endl;

	cout << "End of Question 2" << endl;
	cout << "-------------" << endl;

	/*
	* 3. Bir havuzu a musluğu 3 , b musluğu 8, c musluğu ise 12 saatte dolduruyor.
	*	Buna göre, 3 musluk aynı anda açılırsa havuz kaç saatte dolar?
	*/

	double faucetA, faucetB, faucetC;
	double poolVolume;
	double timeinHours, timeinMinutes;

	poolVolume = 24.0;

	faucetA = 8.0;
	faucetB = 3.0;
	faucetC = 2.0;


	timeinHours = poolVolume / (faucetA + faucetB + faucetC);
	cout << "time that need for fill the pool with three faucet in hours:" << timeinHours << endl;

	timeinMinutes = timeinHours * 60;
	cout << "time that need for fill the pool with three faucet in Minutes:" << timeinMinutes << endl;


	cout << "-------------" << endl;
	cout << " - Type-Casting - " << endl;

	double pi = 3.14;
	int number;

	// printf("%d", pi); -> kızar, type-mismatch yüzünden.
	printf("%d\n", (int)pi); // kızmaz, type-casting yaptık çünkü. double veri tipini, integer'a cast ettik.
	cout << pi << endl;

	number = pi;
	cout << number << endl;

	number = 2.15 * 3;
	pi = 2.15 * 3;
	cout << number << endl << pi << endl;


	return 0;
}





























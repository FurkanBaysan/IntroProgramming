#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	cout << "-- 21-50 Odd numbers --" << endl;
	for (int i = 21; i <= 50; i = i + 2) {
		cout << i << endl;
	}
	cout << "-- 0-10 numbers --" << endl;
	int i = 0;
	while (i <= 10)
	{
		cout << i << endl;
		i++;
	}
	/*
	Algoritma: 20-50 arasındaki tek sayıları ekrana bastıran algoritmayı yazalım.
	*/
	cout << "--Odd Numbers between 20 and 50--" << endl;

	int j = 20;
	while (j <= 50)
	{
		if (j % 2 == 1) {
			cout << j << endl;
		}
		/*
		else {
		//Buraya hiç bir şey yazmadan bıraksan da çalışır kod yine.
		 }
		*/
		j++;
	}
	cout << "Odd Numbers between 20 and 50 with for loop" << endl;
	for (int i = 20; i < 50; i++) {
		if (i % 2 == 1) {
			cout << i << endl;
		}
	}

	/*
	Algoritma :100'den 20'ye kadar, 3'e ve 7'ye tam bölünebilen sayıları,
	buyukten kucuğe ekrana bastıran algoritmayı yazalım.
	*/

	cout << "--Numbers that dividing by 3 and 7 and between 100-20 with ascending order-- " << endl;

	for (int i = 100; i >= 20; i--) {
		if (i % 21 == 0) {
			cout << i << endl;
		}
		else
		{

		}
	}

	/*
	Algoritma: Kullanıcıdan 3 sayı alıp, en büyüğünü ekrana yazdıran algortimayı yazalım.
	*/

	/*cout << "If-Else way to find the biggest number of 3 different numbers" << endl;
	int number1, number2, number3;
	cout << "Please enter first number:" << endl;
	cin >> number1;
	cout << "Please enter second number:" << endl;
	cin >> number2;
	cout << "Please enter third number:" << endl;
	cin >> number3;
	if (number1 > number2 && number1 > number3) {
		cout << "the biggest number is:" << number1 << endl;
	}
	else if (number2 > number1 && number2 > number3) {
		cout << "the biggest number is:" << number2 << endl;
	}
	else {
		cout << "the biggest number is:" << number3 << endl;
	}
	cout << "Other way namely using loop to find the biggest number" << endl;*/
	cout << "--The biggest number between 3 different numbers which are given from user--" << endl;
	int givenNumber;
	int biggestNumber = 0;
	cout << "Please Enter 3 Numbers:" << endl;
	for (int i = 0; i < 3; i++) {
		cin >> givenNumber;
		if (givenNumber > biggestNumber) {
			biggestNumber = givenNumber;
		}
	}
	//Bu loop,koşulunda belirtilen adet kadar içindeki komutları çalıştırır. Bir kere
	//koşulundaki adet kadar sayı alır
	//ve en büyük sayıyı güncel tutma amacıyla alınan her sayıyla hali hazırdaki
	//alınan en büyük sayının değerini karşılaştır, daha büyük bir sayı alındıysa
	//onu en büyük yapar, hali hazırdaki en büyük sayı değilse, en büyük sayıya atamaz o alınan
	//sayıyı.Loop'un dışında da hali hazırdaki en büyük sayıyı bastırırız.
	cout << "Biggest Number:" << biggestNumber << endl;

	/*
	Algoritma:Kullanıcı -1 girene kadar,kullanıcıdan alınan sayıların
	en büyüğünü ekrana yazdıran algoritmayı yazınız.
	*/

	int theBiggestNumber = 0;
	int gettingNumber = 0;
	cout << "--Please Enter Numbers--" << endl;
	while (gettingNumber != -1) {
		cin >> gettingNumber;
		if (gettingNumber > theBiggestNumber) {
			theBiggestNumber = gettingNumber;
		}
	}
	cout << "the Biggest Number:" << theBiggestNumber << endl;

	/*
	Algoritma: Kullanıcı -1 girene kadar, kullanıcıdan alınan sayıların
	ortalamasını bulan algoritmayı yazınız.
	*/

	int number = 0;
	int sum = 0;
	int n = 0;
	cout << "--Please Enter Numbers--" << endl;
	while (number != -1) {
		cin >> number;
		sum = sum + number;//Kullanıcıdan alınan her sayıyı sum'a ekleyerek, sum'da tutuyorum.
		n = n + 1; // Kullanıcıdan alınan sayı adedini temsil ediyor. -1 haricinde kullanıcı her sayı girildiğinde adedi 1 arttırmalıyız.
	}
	n = n - 1;// -1'i kullanıcıdan alınan sayı adedine dahil etmesin.
	sum++;//-1'i kullanıcıdan alınan sayıların toplamına da eklemesin.
	cout << "number of Number taken from user:" << n << " " << "sum:" << sum << " " << "Average:" << " " << sum / n << endl;

	/*
	Algoritma: Kullanıcıdan alınan bir sayının asal olup-olmadığını bulan
	algoritmayı yazınız.
	*/

	int checkNumber = 1;
	int isPrimeOrNotNumber;
	int flag = 0;
	cout << "Please Enter a Number which will be check for Prime Or Not" << endl;
	cin >> isPrimeOrNotNumber;
	while (checkNumber < isPrimeOrNotNumber - 1) {
		checkNumber++;
		if (isPrimeOrNotNumber % checkNumber == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		cout << "Sayı Asaldır (Given Number is a Prime Number)" << endl;
	}
	else {
		cout << "Sayi Asal Degildir (Given Number is not a Prime Number)" << endl;
	}
	return 0;
}
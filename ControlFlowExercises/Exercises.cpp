#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	/*
	1. Bir şirket, (company) personellerine fazla mesai ücreti ödemektedir. Programın aşağıda verilen özelliklerine göre,
	mesai ücretini hesaplayan programı yazınız.

	- 10 saate kadar, saat başı 5 lira.
	-10-20 saat arasında, saat başı 3 lira
	-20 saatten sonrası için, saat başı 2 lira

	-> Yani adam şu kadar saat mesai yaptım diyicek, biz de al sana mesai ücretin diyicez.

	Tricky Point :


	Eg. 12 saat mesaiye kalan biri 10*5 + 2*3 lira mesai ücreti alır.Yani ilk 10 saat için saati yine 5 liradan hesaplanır,
	çalıştığı sürenin kalanı için  saati 3 liradan hesaplanır.

*/


	cout << "--Employee Overwage Calculation Scenario--" << endl;
	cout << endl;

	int shiftHours; //Çalışılan mesai saati
	int overtimeWage; //mesai ücreti
	cout << "Please enter the shift hours amount:";
	cin >> shiftHours;

	if (shiftHours <= 10) {
		overtimeWage = shiftHours * 5;
		cout << "overtimeWage:" << " " << overtimeWage;
	}
	else if (shiftHours > 10 && shiftHours <= 20)
	{
		overtimeWage = (10 * 5) + (shiftHours - 10) * 3;
		cout << "overtimeWage:" << " " << overtimeWage;
	}
	else
	{
		overtimeWage = (10 * 5) + (10 * 3) + (shiftHours - 20) * 2;
		cout << "overtimeWage:" << " " << overtimeWage;
	}
	cout << endl;
	cout << "-- End of calculating overtimeWage based on shiftHours-- " << endl;

	cout << endl;

	/*
	2. Bir öğrencinin 0-100 sisteminde, aldığı notun harf değerini bulan programı yazınız.

	90 ve üstü-> AA
	80-90 -> BA
	70-80-> BB
	70 ve altı -> F

	*/
	cout << endl;
	cout << "-- Letter grade Calculation Scenario --" << endl;

	int grade;

	cout << "Please enter the grade:" << endl;
	cin >> grade;

	if (grade >= 90)
	{
		cout << "Grade:" << "AA" << endl;
	}
	else if (grade >= 80)
	{
		cout << "Grade: " << "BA" << endl;
	}
	else if (grade >= 70)
	{
		cout << "Grade:" << "BB" << endl;
	}
	else {
		cout << "Grade:" << "F" << endl;
	}

	cout << endl;
	cout << "End of letter grade corresponding with 0-100 grade" << endl;







	return 0;
}
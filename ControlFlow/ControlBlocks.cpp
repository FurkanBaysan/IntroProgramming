#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	int firstNumber, secondNumber;
	bool loggedintoSystem = true;
	double yesterdayDollar = 7.35;
	double todayDollar = 7.20;

	/* Real-life true part came from "veri kaynağı" i.e data source like
	* cache, local storage, database, excel file etc...
	*/

	cout << "--Login Scenario--" << endl;
	cout << endl;

	if (loggedintoSystem == true)
	{
		cout << "My Courses Button" << endl;
	}
	else
	{
		cout << "Login Button" << endl;
	}

	/*
	Udemy.com veya herhangi bir website'ı düşündüğümüzde, o web sitesine giriş yapılıp-yapılmaması durumuna göre
	kullanıcının (user) önüne açılıcak olan sayfayı betimliyoruz, simüle ediyoruz.
	*/

	cout << endl;
	cout << "--Banking Dollar Scenario--" << endl;
	cout << endl;


	if (yesterdayDollar > todayDollar)
	{
		cout << "Decrease Button" << endl;
	}
	else if (yesterdayDollar < todayDollar)
	{
		cout << "Increase Button" << endl;
	}
	else {
		cout << "No Changing Button" << endl;
	}

	cout << "--Another Arithmetical Scenario--" << endl;
	cout << endl;

	cout << "Please enter the first Number:";
	cin >> firstNumber;
	cout << endl;
	cout << "Please enter the second Number:";
	cin >> secondNumber;


	if (firstNumber > secondNumber)
	{
		cout << "First Number is greater than Second Number" << endl;
	}
	else if (firstNumber == secondNumber)
	{
		cout << "First Number is equal to Second Number" << endl;
	}
	else
	{
		cout << "First Number is less than Second Number" << endl;
	}

	cout << "Number Comparison is Done."; // This statement is working all conditions, because it's included in the rest of the program.







	return 0;
}
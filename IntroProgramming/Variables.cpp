#include <stdio.h>
#include <iostream>

using namespace std;


int main() {

	cout << "Furkan Baysan back in town" << endl;
	cout << "-------------" << endl;


	// Variable Declarations
	int number1 = 10;
	int number2 = 5;
	int number3, number4;



	// \n -> new line and same usage can be obtained by <<endl 

	cout << "number1:" << number1 << "\n" << "number2:" << number2 << "\n";

	cout << "-----" << endl;


	// Arithmetic Operations
	int additionResult = number1 + number2;
	cout << "Addition Result:" << additionResult << endl;

	cout << "-----" << endl;

	int subtractionResult = number1 - number2;
	cout << "Subtraction Result:" << subtractionResult << endl;

	cout << "-----" << endl;

	int multiplicationResult = (number1 * number2);
	cout << "Multiplication Result:" << multiplicationResult << endl;

	cout << "-----" << endl;

	int divisionResult = (number1 / number2);
	cout << "Division Result:" << divisionResult << endl;

	cout << "-----" << endl;

	int modOperationResult = (number1 % number2);
	cout << "Mod Operation Result:" << modOperationResult << endl;

	cout << "-----" << endl;



	// Taking inputs (numbers for this Eg.) from user.
	cout << "Please enter a number:" << endl;
	cin >> number3 >> number4;

	int newResultAddition = additionResult + number3;
	int newResultSubtraction = subtractionResult + number4;

	cout << "Addition Result with given input from user:" << newResultAddition << endl;
	cout << "Subtraction result with given output from user:" << newResultSubtraction << endl;

	cout << "-------------" << endl;

	//Sample Code for explaining Operators (Arithmetic,Shifting,Relational)
	int a = 10;
	int b = 3;

	cout << a + b << endl;

	printf("\n%d", a << 2);

	cout << "\n";

	printf("\n%d", a >> 2);

	cout << "\n" << endl;

	cout << a + b * 2 << endl;

	cout << "\n";

	cout << a % b << endl;

	cout << "\n";

	printf("\n%d", a == b);

	cout << "\n";

	printf("\n%d", a > b);

	cout << "\n";

	cout << a++ << endl;

	cout << "\n";

	cout << ++a << endl;








	return 0;
}















































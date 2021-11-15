#include <stdio.h>
#include <iostream>
using namespace std;

int add(int firstNumber, int secondNumber);
int calculateFactorialRecursive(int firstNumber);
int calculateFactorialIterative(int secondNumber);
int calculateCombination(int firstNumber, int secondNumber);
int findFibonacciIterative(int n);
int findFibonacciRecursive(int number);

int main() {
	int firstNumber = 4;
	int secondNumber = 2;
	cout << "Sum:" << add(firstNumber, secondNumber) << endl;
	cout << "Factorial Calculation By Recursion:" << calculateFactorialRecursive(firstNumber) << endl;
	cout << "Factorial Calculation By Loop:" << calculateFactorialIterative(secondNumber) << endl;
	cout << "Functions can be Execute Repedeately by Calling Itself:" << calculateFactorialIterative(firstNumber) + calculateFactorialRecursive(secondNumber) << endl;
	cout << "Factorial of Factorial fof(x):" << calculateFactorialRecursive(calculateFactorialRecursive(3)) << endl;
	cout << "Combination of Two Numbers:" << calculateCombination(firstNumber, secondNumber) << endl;
	cout << "Fibonacci Sequence:" << " ";
	for (int i = 1; i <= 10; i++) {
		cout << findFibonacciIterative(i) << " ";
	}

	return 0;
}
int add(int number1, int number2) {
	return number1 + number2;
}
int calculateFactorialRecursive(int n) {
	if (n == 0 || n == 1) { //Base Condition.
		return 1;
	}
	else {
		return n * calculateFactorialRecursive(n - 1);
	}
}
int calculateFactorialIterative(int n) {
	int result = 1;
	int i = 1;
	for (int i = n; i >= 1; i--) {
		result = result * i;
	}
	return result;

	// --Yukardaki Loop Yapısına Alternatif Looplar--

	/*while (n >= 1) {
		result = result * n;
		n--;
	}
	while (i <= n) {
		result = result * i;
		i++;
	}
	*/

}
int calculateCombination(int n, int r) {
	// c(n,r) = n! / (n-r)!.r!
	int combinationResult = calculateFactorialIterative(n) / (calculateFactorialRecursive(n - r) * calculateFactorialIterative(r));
	return combinationResult;
}
int findFibonacciIterative(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	for (int i = 3; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int findFibonacciRecursive(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return findFibonacciRecursive(n - 1) + findFibonacciRecursive(n - 2);
	}
}

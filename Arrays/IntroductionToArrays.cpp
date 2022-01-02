#include <iostream>
#include <stdio.h>
using namespace std;
void invert(int array[], int size);
void print(int array[], int size);
void takeReverse(int array[], int start, int end);
void turnDown(int array[], int start, int end);
int findFibonacci(int n);

void invert(int array[], int size) {
	int tempArray[50];
	int j = 0;
	for (int i = size - 1; i >= 0; i--) {
		tempArray[j] = array[i];
		j++;
	}
	for (int i = 0; i < size; i++) {
		array[i] = tempArray[i];
	}
}
void print(int array[], int size) {
	cout << "Reverse Array:" << " ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}
void takeReverse(int array[], int start, int end) {
	while (start < end) {
		int temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}
}
void turnDown(int array[], int start, int end) {
	if (start < end) {
		int temp = array[start];
		array[start] = array[end];
		array[end] = temp;

		turnDown(array, start + 1, end - 1);
	}
}
int findFibonacci(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return findFibonacci(n - 1) + findFibonacci(n - 2);
}
int main() {
	int numbers[10];//Array Definition
	for (int i = 0; i < 10; i++) {//Initializing
		numbers[i] = i + 1;
	}
	cout << "\t" << "--Listing the Array Elements--" << endl;
	for (int i = 0; i < 10; i++) {//Printing/Listing
		cout << "number at index " << i << ":" << " " << numbers[i] << endl;
	}

	cout << "\t" << "--Algorithm: Reverse of Given Array--" << endl;
	int orginalArray[] = { 3,8,7,2,6 };
	int size = sizeof(orginalArray) / sizeof(orginalArray[0]);
	takeReverse(orginalArray, 0, size - 1);
	print(orginalArray, size);
	cout << endl;

	int primeNumbers[] = { 2,3,5,7,11,13 };
	size = sizeof(primeNumbers) / sizeof(primeNumbers[0]);
	invert(primeNumbers, size);
	print(primeNumbers, size);
	cout << endl;


	int oddNumbers[] = { 1,3,5,7,9,11,13,15,17,19 };
	size = sizeof(oddNumbers) / sizeof(oddNumbers[0]);
	turnDown(oddNumbers, 0, size - 1);
	print(oddNumbers, size);
	cout << endl;

	cout << "\t" << "--Algorithm:First 20 Fibonacci Number--" << endl;
	int fibonacciNumbers[20];
	size = sizeof(fibonacciNumbers) / sizeof(fibonacciNumbers[0]);
	for (int i = 0; i < 20; i++) {
		fibonacciNumbers[i] = findFibonacci(i);
	}
	for (int i = 0; i < size; i++) {
		cout << fibonacciNumbers[i] << " ";
	}
	cout << endl;

	cout << "\t" << "-- Algorithm Part 1: Calculate Maximum, Minimum and Average Grade" << endl;
	cout << "\t" << "-- Algorithm Part 2: Print whether an entered note is a previously entered note--"
		<< endl;

	int grades[5];
	int grade;
	int studentNumber = sizeof(grades) / sizeof(grades[0]);
	int sum = 0;
	double average;
	int maxGrade = 0;
	int minGrade = 100;

	for (int i = 0; i < studentNumber; i++) {
		cout << "Grade:" << " ";
		cin >> grade;
		grades[i] = grade;
		sum = sum + grades[i];

		if (grades[i] > maxGrade) {
			maxGrade = grades[i];
		}
		if (grades[i] < minGrade) {
			minGrade = grades[i];
		}
	}
	cout << endl;

	//Checking that Algorithm is worked or not.
	cout << grade << endl;
	for (int i = 0; i < 5; i++) {
		cout << grades[i] << " ";
	}
	cout << endl;

	cout << "Minimum Grade:" << " " << minGrade << " ";
	cout << "Maximum Grade:" << " " << maxGrade << " ";
	average = (int)(sum / studentNumber);
	cout << "Average:" << " " << average << " ";
	cout << endl;

	int newGrade;
	cout << "New Grade:" << " ";
	cin >> newGrade;
	int flag = 0;
	for (int i = 0; i < studentNumber; i++) {
		if (newGrade == grades[i]) {
			flag = 1;
			cout << "Grade is already entered" << endl;
			break;
		}
	}
	if (flag == 0) {
		cout << "Grade is Unique" << endl;
	}
	return 0;
}

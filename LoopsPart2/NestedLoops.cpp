#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	cout << "--Ic-Ice Donguler (Nested Loops)--" << endl;
	cout << endl;

	/*
	1 2 3 4 5
	2 4 6 8 10
	3 6 9 12 15
	4 8 12 16 20
	5 10 15 20 25

	-> 1,2,3,4,5'in satır ve sütün halinde çarpım tablosu verilmiş.
	-> Bu çarpım tablosunun algoritması isteniyor bizden.

	*/
	cout << "--Multiplication Table Algorithm--" << endl;
	int i;
	int j;

	for (i = 1; i <= 5; i++) {

		for (j = 1; j <= 5; j++) {
			cout << " " << i * j;
		}

		cout << "\n";
	}
	/* i=1 için -> içteki döngü 5 kere çalışır
	yani içindeki komut/komutları 5 kere çalıştırır.
	i =1 için -> 1*1=1,2*1=2,3*1=3,4*1=4,5*1=5 bastırılır. Bitti.

	i=2 olur. i=2 için, içteki döngü 5 kere çalışır
	yani içindeki komut/komutları 5 kere çalıştırır.
	i=2 için -> 1*2=2,2*2=4,3*2=6,4*2=8,5*2=10 bastırılır. Bitti.

	i=3 olur. i=3 için, içteki loop 5 kere çalışır
	yani çindeki komutlar/komutları 5 kez çalıştırır.
	i=3 için, 1*3=3,2*3=6,3*3=9,4*3=12,5*3=15 bastırılır. Bitti.
	*/

	//cout << "-------------" << endl;

	//Algoritma: yıldız (*) sembolü ile ekrana dik üçgen çizdiren algoritmayı yazınız.
	cout << "--Rıght Triangle (Dik Üçgen) Algorithm--" << endl;

	for (int i = 1; i <= 5; i++) {

		for (j = 1; j <= i; j++) {
			cout << " " << "*";
		}
		cout << "\n";// İlgili satır için * basma işin bittiyse,alt satıra geç demek.
	}
	// i=1 için -> 1 kez çalışmalı içteki loop. Yani 1 adet yıldız (*) çizdirmeli.
	// i=2 için -> 2 kez çalışmalı içteki loop. Yani 2 adet yıldız (*) çizdirmeli.
	// Mantık : İçteki loop i kez çalışmalı, yıldız(*) çizdirmeli.
	//Unutma: İçteki loop, i'nin her bir değeri için, koşulda belirtilen adet kadar çalışır.

	// i=1 iken j<=i (yani j<=1) olduğu için içteki loop 1 kez çalışır, 1 yıldız(*) çizdirir. 
	// i=2 iken j<=i (yani j<=2) olduğu için içteki loop 2 kez çalışır, 2 yıldız(*) çizdirir.
	// i=3 iken j<=i (yani j<=3) olduğu için içteki loop 3 kez çalışır, 3 yıldız(*) çizdirir.
	// i=4 iken j<=i (yani j<=4) olduğu için içteki loop 4 kez çalışır, 4 yıldız(*) çizdirir.
	// i=5 iken j<=i (yani j<=5) olduğu için içteki loop 5 kez çalışır, 5 yıldız(*) çizdirir ve dik üçgen oluşur.

	//Algoritma: yıldız (*) sembolü ile ekrana ters dik üçgen çizdiren algoritmayı yazınız.
	cout << "--Inverted Right Triangle (Ters Dik Üçgen) Algorithm--" << endl;

	for (int i = 5; i >= 1; i--) {

		for (int j = 1; j <= i; j++) {
			cout << " " << "*";
		}
		cout << "\n";
	}
	cout << "--Sağa Yaslı Ters Dik Üçgen Algorithm--" << endl;
	for (int i = 5; i >= 1; i--) {

		for (int j = 0; j < 5 - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	cout << "--Break and Continue Keywords In Loops--" << endl;

	for (int i = 0; i < 10; i++) {
		if (i == 5)
			continue;// Dongunun o step için ondan sonraki komutlarını atlatır. O step için döngüyü çalıştırma, bir step ileriye atla.
		cout << i << endl;
		if (i == 7)
			break;// Donguyu kırar.
	}





	return 0;
}
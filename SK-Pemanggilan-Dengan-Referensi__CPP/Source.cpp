#pragma warning(disable:4996)

/* ---------------------------- */
/* Penggunaan Call By Reference */
/* Program Tambah Nilai */
/* ---------------------------- */

#include <iostream>
#include <conio.h>

/* Created by Rizky Khapidsyah */

using namespace std;

void tambah(int* c, int* d);

int main() {
	int a, b;
	a = 673;
	b = 954;
	
	cout << "Nilai Sebelum Pemanggilan Fungsi";
	cout << "\na = " << a << " b = " << b;

	tambah(&a, &b);
	
	cout << endl;
	cout << "\nNilai Setelah Pemanggilan Fungsi";
	cout << "\na = " << a << " b = " << b;
	
	_getch();
	return 0;
}

void tambah(int* c, int* d) {
	*c += 5;
	*d += 9;

	cout << endl;
	cout << "\nNilai di Akhir Fungsi Tambah()";
	cout << "\nc = " << *c << " d = " << *d;
}
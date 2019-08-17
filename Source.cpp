#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b;
	
	cout << "Input nilai A dan B\n" << endl << "Kondisi A: Nilai = 3\n" << "Kondisi B: Nilai < 7\n" << endl;
	cout << "Masukkan Nilai A: "; cin >> a;
	cout << "Masukkan Nilai B: "; cin >> b;

	cout << endl;

	if (a == 3)
	{
		cout << "Nilai A Sudah Sesuai Kondisi!\n" << endl;
	}

	if (b < 7)
	{
		cout << "Nilai B Sudah Sesuai Kondisi!\n" << endl;
	}

	cout << "Selesai";
	_getch();
	return 0;
}
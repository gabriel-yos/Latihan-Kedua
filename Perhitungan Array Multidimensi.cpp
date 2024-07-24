#include <cstdlib>
#include <iostream>
using namespace std;

int main() 
{
	//mendeklarasikan array dalam variable
	int A[2][2], B[2][2], C[2][2];
	int array1 [5] = { 7, 6, 9, 1, 16 };
	int array2 [5];
	int tambah, kurang, kali;

	//memberikan nilai beberapa elemen array 2
	array2[0] = 2;
	array2[1] = 3;
	array2[2] = 4;

	//membuat persamaan matematika
	tambah = array1[2] + array2[0];
	kurang = array1[3] - array2[1];
	kali = array1[4] * array2[2];

	//Menampilkan hasil persamaan
	cout << "Array[2] + Array[0] = " << tambah << endl;
	cout << "Array[3] - Array[1] = " << kurang << endl;
	cout << "Array[4] * Array[2] = " << kali << endl;
	system("PAUSE");
	return 0;
}

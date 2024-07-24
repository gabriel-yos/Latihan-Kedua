#include <cstdlib>
#include <iostream>
using namespace std;

int main() 
{
	//mendeklarasikan array dalam variable
	int A[2][2], B[2][2], C[2][2];
	cout << "Masukkan Nikal A11 : ";
	cin >> A[0][0];
	cout << "Masukkan Nikal A12 : ";
	cin >> A[0][1];
	cout << "Masukkan Nikal A21 : ";
	cin >> A[1][0];
	cout << "Masukkan Nikal A22 : ";
	cin >> A[1][1];

	cout << "Masukkan Nikal B11 : ";
	cin >> B[0][0];
	cout << "Masukkan Nikal B12 : ";
	cin >> B[0][1];
	cout << "Masukkan Nikal B21 : ";
	cin >> B[1][0];
	cout << "Masukkan Nikal B22 : ";
	cin >> B[1][1];

	//menghitung nilai array
	C[0][0] = (A[0][0] * B[0][0]) + (A[0][1] * B[1][0]);
	C[0][1] = (A[0][0] * B[0][1]) + (A[0][1] * B[1][1]);
	C[1][0] = (A[1][0] * B[0][0]) + (A[1][1] * B[1][0]);
	C[1][1] = (A[1][0] * B[0][1]) + (A[1][1] * B[1][1]);

	cout << "Nilai Matrik C adalah: " << endl;
	cout << " [ " << C[0][0] << " " << C[0][1] << " ]" << endl;
	cout << " [ " << C[1][0] << " " << C[1][1] << " ]" << endl;
	system("PAUSE");
	return 0;
}

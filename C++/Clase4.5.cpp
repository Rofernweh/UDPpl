#include <iostream>
using namespace std;
//Cree un programa que revierta numeros de 4 cifras, ya sea un 2135 y devuelva un 5312
int main ()
{
	int num, unidad, decena, centena, udemil;
	cout << "Ingrese un numero: \n";
	cin >> num;
	unidad = num%10;
	num /= 10;
	decena = num%10;
	num /= 10;
	centena = num%10;
	num /= 10;
	udemil = num%10;
	num /= 10;

	cout << unidad << decena << centena << udemil;

	return 0;
}
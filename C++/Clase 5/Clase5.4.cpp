#include <iostream>
using namespace std;
//Escriba un algoritmo que recibe los tres ángulos interiores de un triángulo e indica si es un triángulo válido o no.
int main()
{
	int angleA, angleB, angleC, triangulo;
	cout << "Ingrese los 3 angulos a verificar: \n";
	cin >> angleA, cin >> angleB, cin >> angleC;
	triangulo = angleA + angleB + angleC;
	if (triangulo == 180)
	{
		cout << "El triangulo es valido";
	}
	else 
	{
		cout << "El tringulo no es valido ";
	}

	return 0;
}

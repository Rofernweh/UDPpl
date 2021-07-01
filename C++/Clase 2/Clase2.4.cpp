#include <iostream>
#include <cmath>
using namespace std;
//Pida al usuario el alto y ancho de un rectángulo, y entregue el largo de la diagonal
int main () 
{
	int alto, ancho;
	cout << "Ingrese el alto del rectangulo: \n";
	cin >> alto;
	cout << "Ingrese el ancho del rectangulo: \n";
	cin >> ancho;
	cout << "El largo de la diagonal es: " << sqrt((alto*2)+(ancho*2));

	return 0;
}

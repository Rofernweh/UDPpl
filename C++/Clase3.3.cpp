#include <iostream>
#include <cmath>
using namespace std;
//Indique cuantas cajas serán necesarias para transportar las cajas en m3, dada la arista de una caja y la cantidad total que se desea transportar
int main () 
{
	int ct, ac,vc;
	cout << "Ingrese cuantos m3 desea transportar: ";
	cin >> ct;
	cout << "Ingrese la arista de una de las cajas a transportar en metros: ";
	cin >> ac;
	vc = pow(ac,3);
	cout << "La cantidad de cajas posibles de transportar es: " << ct/vc;
	
	return 0;

}
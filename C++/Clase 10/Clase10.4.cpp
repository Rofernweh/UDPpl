#include <iostream>
using namespace std;
/*Haga un programa para taxímetros. 
Se piden los kilómetros andados y se entrega el costo. 
Bajada de bandera = $200 pesos. 
$120 pesos cada doscientos metros.*/
int main()
{
	int km;
	cout << "Ingrese los kilometros: \n";
	cin >> km;
	cout << "Su tarifa es: $" << ((km*5)*120)+200 << "pesos."  


	return 0;
}
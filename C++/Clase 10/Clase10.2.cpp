#include <iostream>
using namespace std;
//Haga un programa que le permita calcular la propina que debe dejar en un restaurante (10%), en base al total de la cuenta. 
int main ()
{	
	int propina;
	cout << "Ingrese el total de la cuenta: \n"
	cin >> propina;
	propina = propina*0.1;
	cout << "La propina sugerida es: " << propina;

	return 0;
}
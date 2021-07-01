#include <iostream>
using namespace std;
//calcular la cantidad de propina que debe dejarle a un repartidor. Para ello debe solicitar el monto de la compra y el porcentaje de propina
int main()
{
	int mcompra, ppropina, propina;
	cout << "Ingrese el monto de la compra: \n";
	cin >> mcompra;
	cout << "Ingrese el porcentaje de propina: ";
	cin >> ppropina;
	cout << "La propina sugerida es: " << (mcompra/100)*ppropina;

	return 0;
}

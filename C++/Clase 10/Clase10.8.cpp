#include <iostream>
using namespace std;
/*Ud. quiere simular una caja registradora. Para ello, confeccione un programa, que inicialmente pida el total de productos vendidos en el día. 
Luego, solicite esa cantidad de precios, y finalmente entregue la suma total de productos vendidos.*/
int main()
{
	int productos,aux, suma=0, total;
	cout << "Ingrese la cantidad de productos vendidos en el día: \n";
	cin >> productos;
	for (int i=0; i<productos; i++)
	{
		cout << "Ingrese el valor del producto vendido: \n";
		cin >> aux;
		suma += aux;
	}
	cout << "El monto total vendido en el día fue: " << suma;


	
	return 0;
}
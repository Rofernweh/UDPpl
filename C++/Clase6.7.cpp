#include <iostream>
using namespace std;
//Calcular el producto de dos números a y b dados sin usar el operador *
int main()
{
	int a, b;
	cout << "Ingrese el multiplicando: ";
	cin >> a;
	cout << "Ingrese el multiplicador: ";
	cin >> b;
	int resultado=1;
	int i=0;
	while (i<b)
	{
		resultado *= a;
		i++;
	}
	cout << resultado;

	return 0;
}
#include <iostream>
using namespace std;
//Calcular la sumatoria de 1 a N, donde N es ingresado por el usuario.Implementar usando while. Comprobarlo con la fórmula.
// (n*(n+1))/2
int main()
{
	int N, aux=1, sumatoria=0;
	cout << "Ingrese un numero: \n";
	cin >> N;
	while (aux <= N)
	{
		sumatoria+=aux;
		aux++;
	}
	cout << sumatoria;

	return 0;
}

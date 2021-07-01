#include <iostream>
using namespace std;
//Calcule la suma de los primeros N números impares.
int main()
{
	int N, aux=1, sum=0;
	cout << "Ingrese un numero: \n";
	cin >> N;
	while (aux <= N)
	{
		sum += aux;
		aux +=2;
	}
	cout << sum;

	return 0;
}
#include <iostream>
using namespace std;
/*Un número se dice perfecto si equivale a la suma de sus divisores propios, 
Crear un programa, que indique si un número n dado es perfecto o no.*/
int main ()
{	
	int n, divisores;
	cout << "Ingrese el numero a revisar: ";
	cin >> n;
	for(int i=1; i<n;i++)
	{
		if(n%i == 0)
		{
			divisores+= i;
		}
	}
	if (divisores == n)
	{
		cout << "El numero es perfecto.";
	}
	else
	{
		cout << "El numero no es perfecto";
	}

	return 0;
}
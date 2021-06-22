#include <iostream>
using namespace std;
//Imprimir los pares entre [a, b] en la pantalla, donde a y b son ingresados por el usuario 
int main()
{	
	int a, b;
	cout << "Ingrese el primer numero: \n";
	cin >> a;
	cout << "Ingrese el segundo termino: \n";
	cin >> b;
	while (a <= b)
		if (a%2 == 0)
		{
			cout << a << endl;
			a++;
		}
		else if (a%2 != 0)
		{
			a++;
		}

	return 0;
}
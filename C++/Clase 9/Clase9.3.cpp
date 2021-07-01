#include <iostream>
using namespace std;
//Escribir un programa, que dado un entero n ingresado por el usuario, cuente por pantalla, primero hasta 1, despues hasta 2, despues 3, hasta que llegue a n.
int main ()
{	
	int n;
	cout << "Ingrese un numero: \n";
	cin >> n;
	for (int i=1; i<=n;i++)
	{
			cout << i << endl;
	}

	return 0;
}
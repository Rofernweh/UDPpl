#include <iostream>
using namespace std;
//Determinar si un número dado por el usuario a es múltiplo de otro númerob dado por el usuario.
int main()
{
	unsigned int num, mult;
	cout << "Ingrese el numero a revisar: " << endl;
	cin >> num;
	cout << "Ingrese el multiplo a verificar: " << endl;
	cin >> mult;

	if (num%mult == 0 && mult)
	{
		cout << "El numero es multiplo de " << mult;
	}
	else if (num%mult != 0)
	{
		cout << "El numero no es multiplo de " << mult;
	}

	return 0;
}
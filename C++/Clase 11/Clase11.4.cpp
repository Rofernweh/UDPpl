#include <iostream>
using namespace std;
//Crear un arreglo, que guarde 20 números ingresados por el usuario.
int main()
{
	int num20[20];
	for (int i=0; i<20;i++)
	{
		cout << "Ingrese un numero:\n";
		cin >> num20[i];
	}
	
	return 0;
}
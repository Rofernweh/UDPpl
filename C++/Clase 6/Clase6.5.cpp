#include <iostream>
using namespace std;
//Imprimir los naturales entre [a, b] en la pantalla, donde a y b son ingresados por el usuario 
int main()
{
	int num = 0;
	int numin, numin2;
	cout << "Ingrese un numero: ";
	cin >> numin;
	cout << "Ingrese otro numero: ";
	cin >> numin2;
	while (numin <= numin2)
	{
		cout << numin << endl;;
		numin++;
	}

	return 0;
}

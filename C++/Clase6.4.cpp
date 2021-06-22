#include <iostream>
using namespace std;
//Imprimir los primeros n naturales en la pantalla, donde n es ingresado por el usuario (es decir, los números entre [1,n]).
int main()
{
	int num = 0;
	int numin;
	cout << "Ingrese un numero: ";
	cin >> numin;
	while (num <numin)
	{
		cout << num+1 << endl;;
		num++;
	}

	return 0;
}
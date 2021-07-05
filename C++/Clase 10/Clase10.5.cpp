#include <iostream>
using namespace std;
//Cree un programa que permita calcular tanto el impuesto anual a pagar como también el total restante de una persona. El programa, para esto, debe pedir el sueldo Mensual.
int main()
{	
	int imensual;
	cout << "Ingrese su sueldo mensual: \n";
	cin >> imensual;
	if (imensual*12 <=200000)
	{
		cout << "El impuesto anual es: 0";
	}
	else if (imensual*12 >200000 && imensual*12 <=500000)
	{
		cout << "El impuesto anual es: " << (imensual*12)*0.1;
	}
	else if (imensual*12>500000)
	{
		cout << "El impuesto anual es: " << (imensual*12)*0.2;
	}
	else
	{
		cout << "El monto ingresado es incorrecto.";
	}

	return 0;
}
#include <iostream>
using namespace std;
//Haga un programa que verifique si un año ingresado es año bisiesto o no. 
int main()
{
	int year;
	cout << "Ingrese el año";
	cin >> year;
	if (year%100 == 0)
	{
		if (year%400 == 0 && year%4 ==0)
		{
			cout << "El año es bisiesto";
		}
		else
		{
			cout << "El año no es bisiesto";
		}
	}
	else if (year%100 != 0)
    {
		if (year%4 == 0)
		{
			cout << "El numero es bisiesto";
		}
		else
		{
			cout << "El numero no es bisiesto";
		}
    }
	return 0;
}

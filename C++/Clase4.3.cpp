#include <iostream>
using namespace std;
//Haga un algoritmo que pida tres numeros, e indique si es posible construir un triangulo con estos numeros
int main ()
{
	int a, b, c;
	cout << "Ingrese 3 numeros donde el tercero sea el mayor: \n";
	cin >> a, cin >> b, cin >> c;
	if (a+b>c && a>0 && b>0 && c>0)
	{
	    cout << "Se puede formar un triangulo";
	}
	else
	{
	    cout << "No se puede formar un triangulo";
	}
	
	return 0;
}
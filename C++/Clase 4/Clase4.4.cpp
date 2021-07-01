#include <iostream>
using namespace std;
//Haga un programa que pida 3 numeros e indique cual de ellos es el mayor
int main ()
{
	int a, b, c;
	cout << "Ingrese 3 numeros: \n";
	cin >> a, cin >> b, cin >> c;
	if (a > b)
	{
		if (a > c)
		{
			cout << "El primer numero es el mayor";
		}
		else if (a < c)
		{
			cout << "El tercer numero es el mayor";
		}	
		else if (a == c)
		{
		    cout << "El primer y el tercer numero son los mayores";
		}
	}
	else if (a < b)
	{
		if (b > c)
		{
			cout << "El segundo numero es el mayor";
		}
		else if (b < c)
		{
			cout << "El tercer numero es el mayor";
		}
		else if (b == c)
		{
		    cout << "El segundo y tercer numero son los mayores";
		}
	}
	else if (a == b)
	{
	    if (a > c)
	    {
	        cout << "El primer y segundo numero son los mayores";
	    }
	    else if (a < c)
	    {
	        cout << "El tercer numero es el mayor";
	    }
	    else if (a == c)
	    {
	        cout << "Todos son iguales";
	    }
	}
	
	return 0;
}

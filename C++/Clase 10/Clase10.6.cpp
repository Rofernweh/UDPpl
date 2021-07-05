#include <iostream>
using namespace std;
//Haga un programa que pida al usuario las coordenadas de un punto en el espacio, e indique en qué cuadrante están, o bien si está en un eje o en el origen.
int main()
{
	int x, y; 
	cout << "Ingrese coordenada x: \n";
	cin >> x;
	cout << "Ingrese coordenada y: \n";
	cin >> y;
	if (x > 0 && y > 0)
	{
		cout << "El punto se encuentra en el primer cuadrante \n";
	}
	else if (x < 0 && y > 0)
	{
		cout << "El punto se encuentra en el segundo cuadrante \n";
	}
	else if (x < 0 && y < 0)
	{
		cout << "El punto se encuentra en el tercer cuadrante \n";
	}
	else if (x > 0 && y < 0)
	{
		cout << "El punto se encuentra en el cuarto cuadrante \n";
	}
	else if (x == 0 && y != 0)
	{
		cout << "El punto se encuentra en el eje y \n";
	}
	else if (x != 0 && y == 0)
	{
		cout << "El punto se encuentra en el eje x \n";
	}
	else if (x == 0 && y == 0)
	{
		cout << "El punto se encuentra en el origen \n";
	}

	
	return 0;
}
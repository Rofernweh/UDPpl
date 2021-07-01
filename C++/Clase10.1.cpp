#include <iostream>
using namespace std;
//Ud. desea viajar cierta distancia, y a cierta velocidad. Haga un programa que pida estos datos y entregue tiempo de viaje.
int main ()
{	
	float distancia, velocidad, t_viaje;
	cout << "Ingrese la distancia a recorrer en km: \n";
	cin >> distancia;
	cout << "Ingrese la velocidad del recorrido en km/h: \n";
	cin >> velocidad;
	t_viaje = distancia/velocidad;
	cout << "El tiempo de viaje estimado es de: " << t_viaje << " horas.";

	return 0;
}
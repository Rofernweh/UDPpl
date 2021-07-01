#include <iostream>
using namespace std;
//Haga un programa que calcule cuánto demora un auto en viajar de un lugar a otro, dada su velocidad y la distancia de ambos puntos
int main () 
{
	int v, d;
	cout << "¿Cuál es la velocidad del auto? km/h \n";
	cin >> v;
	cout << "¿Cuál es la distancia hasta su destino? \n";
	cin >> d;
	cout << "Se demora " << d/v << " horas en llegar a su destino";
	
	return 0;
}

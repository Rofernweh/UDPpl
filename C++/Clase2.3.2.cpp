#include <iostream>
using namespace std;
//Dada la aceleracion constante y un tiempo de viaje, determine la distancia recorrida
int main ()
{
	float ac, tv, dc;
	cout << "Ingrese la velocidad constante: \n";
	cin >> ac;
	cout << "Ingrese el tiempo de viaje:";
	cin >> tv;
	cout << "La distancia recorrida es " << ac*tv << " kilometros";

	return 0;

}

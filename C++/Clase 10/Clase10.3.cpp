#include <iostream>
using namespace std;
/*Una carretera cuesta $1M por kilómetro si se construye sobre arena. 
Atravesar una montaña cuesta $2M por kilómetro. 
Construirla sobre roca cuesta $1.5M por kilómetro. 
Haga un programa que pida cuantos kilómetros sobre cada tipo se desean construir y entregue el costo total.*/
int main ()
{	
	float mountain, rock, sand;
	cout << "Cuantos kilometros quiere construir sobre montaña?\n";
	cin >> mountain;
	cout << "Cuantos kilometros quiere construir sobre roca?\n";
	cin >> rock;
	cout << "Cuantos kilometros quiere construir sobre arena?\n";
	cin >> sand;
	mountain *=2;
	rock*=1.5;
	sand = sand;

	cout << "El costo total de la carretera es: " << mountain+rock+sand;

	return 0;
}
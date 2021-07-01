#include <iostream>
using namespace std;

int main()
{
	int edad;
	cout << "Por favor, ingrese su edad." << endl;
	cin >> edad;
	if (edad <0 || edad >130)
		{
			cout << "Ha habido un error con respecto a su edad, por favor, ingrese denuevo" << endl;
			cin >> edad;
		}
	if (edad >=10 && edad <=20)
		{
			cout << "El bloque que le toca a usted con respecto a su edad, es el bloque 1, el 27 de agosto a las 18:00hrs" << endl;
		}
	else if (edad >=21 && edad <=50)
		{
			cout << "El bloque que le toca a usted con respecto a su edad, es el bloque 2, el 27 de agosto a las 21:00hrs" << endl;
		}
	else if (edad >=51 && edad <=70)
		{
			cout << "El bloque que le toca a usted con respecto a su edad, es el bloque 3, el 28 de agosto a las 18:00hrs" << endl;
		}
	else
		{
			cout << "El bloque que le toca a usted con respecto a su edad, es el bloque 4, el 28 de agosto a las 21:00hrs" << endl;
		}
}

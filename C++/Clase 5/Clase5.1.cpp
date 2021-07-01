#include <iostream>
using namespace std;
//Escriba un algoritmo que pida cuatro notas, calcule su promedio, e indique si el alumno aprueba o reprueba la asignatura. Asuma que todas las notas tienen la misma ponderación.
int main ()
{
	float n1, n2, n3, n4;
	cout << "Ingrese sus 4 notas: ";
	cin >> n1, cin >> n2, cin >> n3, cin >> n4;
	float promedio = (n1+n2+n3+n4)/4;
	if (promedio >= 4)
	{
		cout << "Usted ha aprobado la asignatura con un " << promedio;
	}
	else if (promedio < 4)
	{
		cout << "Usted ha reprobado la asignatura con un " << promedio;
	}

	return 0;
}

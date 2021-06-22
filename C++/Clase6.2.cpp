#include <iostream>
using namespace std;
/*Una empresa quiere dar un bono a cada trabajador basado en la antigüedad en la empresa. 
Si lleva más de 10 años, será un bono de 25%. 
Si lleva entre 2 y 10 años, será un bono de 10%. 
Si lleva menos que 2 años, el bono será del 5%. Todos los bonos son sobre el sueldo. 
Crear un programa que en base al sueldo y los años de servicio, entregue el sueldo total (con bono). */
int main()
{
	int sueldo, years, sueldo_total, bono;
	cout << "Ingrese su sueldo: \n";
	cin >> sueldo;
	cout << "Ingrese sus años de servicio: \n";
	cin >> years;
	if (years>=10)
	{
		bono = sueldo*.25;
		sueldo_total = sueldo + bono;
		cout << "Su sueldo total es $" << sueldo_total;
	} 
	else if (years<10 && years>=2)
	{
		bono = sueldo*.10;
		sueldo_total = sueldo + bono;
		cout << "Su sueldo total es $" << sueldo_total;
	}
	else if (years<2)
	{
		bono = sueldo*.05;
		sueldo_total = sueldo + bono;
		cout << "Su sueldo total es $" << sueldo_total;
	}
	
	return 0;
}
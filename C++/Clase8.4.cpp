#include <iostream>
using namespace std;
/*Lo contrata una empresa de abogados para hacer un programa para dividir herencias entre 4 personas. 
Primero el usuario debe ingresar los 4 valores de las partes de la herencia, luego el valor de la herencia. 
El programa debe indicar qué parte le toca a cada uno.*/
int main ()
{
	int herencia, p_parte, parte, total_herencia=0;
	cout << "Ingrese el total de la herencia: \n";
	cin >> herencia;
	for (int i=1; i<=4; i++)
	{
		cout << "Ingrese el porcentaje de la parte " << i << ": \n";
		cin >> p_parte;
		total_herencia += p_parte;
		if(total_herencia >100)
		{   
		    cout << "Error";
			break;
		}
		parte = (herencia/100)*p_parte;
		cout << "La parte " << i << "es: " << parte << endl; 
	}	

	return 0;
}
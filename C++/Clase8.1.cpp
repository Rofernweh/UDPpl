#include <iostream>
#include <cmath>
using namespace std;
/*Se deja caer un objeto. 
Se pide al usuario un entero n,donde n es la cantidad de segundos que el usuario desea medir. 
Imprimir en pantalla cuanto ha caído el objeto en cada segundo menor a n.  */
int main ()
{
	float n;
	float distancia;
	cout << "Ingrese el tiempo que desea medir en segundos: \n";
	cin >> n;
	for(i=0; i<=n;i++)
	{
		distancia= 0.5*9.8*(pow(n,n));
		cout << "En el segundo\t" << i << " se recorrieron " << distancia << " metros.";
	}
}
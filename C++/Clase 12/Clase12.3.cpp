#include <iostream>
using namespace std;
/*Hay 1000 monedas mostrando sello. Una persona da vuelta todas las monedas pares. 
Después da vuelta todas las monedas múltiplos de 3. Luego todas las monedas múltiplos de 4, y así hasta todas las multiplos de 1000.
Imprimir por pantalla todos los números de monedas (por ejemplo la moneda 1, la 4, etc..) que muestran cara.
Hint 1: Usar un arreglo de bool
Hint 2: Arr[i] = !Arr[i];*/
int main()
{
	//true=cara false=sello
	bool monedas[1000];
	//Hay 1000 monedas mostrando sello
	for (int i=0; i<1000; i++)
	{
		monedas[i]=false;
	}	
	//Una persona da vuelta todas las monedas pares
	for (int j=1; j<1000;j+=2)
	{
		monedas[j]=true;
	}
	//Después da vuelta todas las monedas múltiplos de 3.
	for (int k=2; k<1000;k+=3)
	{
		monedas[k] = !monedas[k]; 
	}
	//Luego todas las monedas múltiplos de 4.
	for (int l=3; l<1000;l+=4)
	{
		monedas[l] = !monedas[l]; 
	}
    string verdadero = "cara";
    string falso = "sello";
	for (int m=0; m<1000;m++)
	{
	    if (monedas[m]==0)
	    {
	        cout << "La moneda "<< m+1 << " es: " << falso << endl;
	    }
	    else if (monedas[m]==1)
	    {
	        cout << "La moneda "<< m+1 << " es: " << verdadero << endl;
	    }
		
	}

	return 0;
}
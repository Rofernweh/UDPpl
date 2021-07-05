#include <iostream>
using namespace std;
//Crear un arreglo con los pares del 1 al 1000.
int main()
{
	int numpares[500], j=0, suma=0;
	for (int i=2; i<=1000;i+=2)
	{
		numpares[j]=i;
		j++;
	}
	for (int k=0; k<500; k++)
	{
		suma += numpares[k];
	}
	cout << suma/500;
	
	return 0;
}
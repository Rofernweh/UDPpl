#include <iostream>
using namespace std;
//Crear un arreglo que guarde el triple de cada valor del arreglo anterior.
int main()
{
	int num20[20];
	for (int i=0; i<20;i++)
	{
		cout << "Ingrese un numero:\n";
		cin >> num20[i];
		num20[i]=num20[i]*3;
	}
	
	return 0;
}
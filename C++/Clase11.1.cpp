#include <iostream>
using namespace std;
//Crear un arreglo con los números del 1 al 100.
int main()
{
	int numto100[100];
	for(int i=1; i<=100;i++)
	{
		numto100[i]=i;
		cout << numto100[i] << endl;
	}
	
	return 0;
}
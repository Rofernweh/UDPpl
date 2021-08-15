#include <iostream>
/*Crear un programa que pida dos números x e y que serán las dimensiones de una matriz. 
Luego pedir números para rellenar la matriz, de la siguiente forma: 
“Ingrese número 0-0”, “Ingrese número 0-1”, etc, hasta llenar la matriz.*/
using namespace std;

int main()
{
    int x, y;
    cout << "Ingrese el eje x de la matriz: \n";
    cin >> x;
    cout << "Ingrese el eje y de la matriz: \n";
    cin >> y;

    int matriz[x][y];
    for(int i=0; i<x; i++)
    {
        for(int j=0;j<y;j++)
        {
            cout << "Ingrese un número para la matriz [" << i+1 << "][" << j+1 << "]" << endl;
            cin >> matriz[i][j];
        }
    }

}
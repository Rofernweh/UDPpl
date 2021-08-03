#include <iostream>
using namespace std;
//Pedirle al usuario otra matriz de5x5, luego indicar por pantalla si ambas matrices son iguales o no.
int main()
{
    int matriz[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0; j<5;j++)
        {
            cout << "Ingrese un numero: " <<endl;
            cin >> matriz[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0; j<5;j++)
        {
            cout << matriz[i][j] << " \n"[j == 5-1];
        }
    }
}
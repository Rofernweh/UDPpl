#include <iostream>
using namespace std;
//Pedirle al usuario otra matriz de 5x5, luego indicar por pantalla si ambas matrices son iguales o no.
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
    int matriz2[5][5];
    for(int k=0;k<5;k++)
    {
        for(int l=0; l<5;l++)
        {
            cout << "Ingrese un numero: " <<endl;
            cin >> matriz2[k][l];
        }
    }
    int contador=0;
    for(int k=0;k<5;k++)
    {
        for(int l=0; l<5;l++)
        {
            if (matriz[k][l] == matriz2[k][l])
            {
                contador++;
            }
        }
    }
    if (contador <25)
    {
        cout << "No son iguales";
    }
    else if(contador == 25)
    {
        cout << "Son iguales";
    }
}
#include <iostream>
using namespace std;
//Crear una tercera matriz, que corresponda a la suma punto a punto de ambas matrices anteriores.
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
    int matriz3[5][5];
    for(int a=0;a<5;a++)
    {
        for(int b=0; b<5;b++)
        {
            matriz3[a][b] = (matriz[a][b] + matriz2[a][b]);
        }
    }
    for(int a=0;a<5;a++)
    {
        for(int b=0; b<5;b++)
        {
            cout << matriz3[a][b] << " \n"[b == 5-1];
        }
    }
}
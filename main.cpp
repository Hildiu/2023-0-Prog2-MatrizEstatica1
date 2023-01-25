#include <iostream>
#include <iomanip>
using namespace std;

void imprimirMatriz( int  matriz[][4], int filas, int col );
int hallaMayor(int mat[][4], int filas, int col);

int main()
{
    int  mat[3][4];
    
    for(int f=0; f<3; f++)
      for(int c=0; c<4; c++)
      {
        cout << "mat[" << f <<"][" << c << "]= ";
        cin >> mat[f][c];
      }
    //---- ahora vamos a imprimir los datos de la matriz
    imprimirMatriz(mat, 3, 4);
    cout <<"\n";
    cout << "El mayor elemento de la matriz es: " << hallaMayor(mat, 3, 4) << "\n";


  return 0;
}

int hallaMayor(int mat[][4], int filas, int col)
{
  int mayor = mat[0][0];
  for(int f=0; f<filas; f++)
    for(int c=0; c<col; c++)
      if( mat[f][c]>mayor)
        mayor = mat[f][c];
  return mayor;
}


void imprimirMatriz( int  matriz[][4], int filas, int col )
{
  cout << "\n";
  for(int f=0; f<filas; f++)
  {
    for(int c=0; c<col; c++)
      cout << setw(7) << matriz[f][c];
    cout << "\n";
  }
}
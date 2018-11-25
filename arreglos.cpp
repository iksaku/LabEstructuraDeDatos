#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

void main () {
   int n[ 10 ]; // Declaración de la variable "n" de tipo "(array) (10)"

   // Los arreglos comienzan con un indice "0"
   for ( int i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; // Se asigna un valor "i + 100" en la posición "i" del arreglo
   }

   cout << "Indice" << setw( 13 ) << "Valor" << endl;
   // Se imprime cada elemento del arreglo, mostrando el indice y su valor.       
   for ( int j = 0; j < 10; j++ ) {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
}
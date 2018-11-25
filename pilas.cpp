#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void main(void) {   
   stack<int> s1; // Declaración de la variable "s1" de tipo "(stack)"
   vector<int> v = {1, 2, 3, 4, 5}; // Declaración de un vector "v" con valores tipo "(int)"
   stack<int, vector<int>> s2(v); // Asignación de la variable "s2" con valores de "v"

   cout << "Tamaño del Stack \"s1\": " << s1.size() << endl;

   cout << "Contenido del Stack \"s2\": " << endl;
   while (!s2.empty()) {
      cout << s2.top() << endl;
      s2.pop();
   }
}
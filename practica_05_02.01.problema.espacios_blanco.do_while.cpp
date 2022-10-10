#include <iostream>

using namespace std;


int main() {
	
	/* Lexico */
	int cont; // contador de blancos
	char c; // carácter actual
	
	/* Algoritmo */
	cont = 0;
	cout << "Escribe una línea : ";
	do {
		cin.get(c);
		if (c == ' ') {
			cont = cont + 1;
		}
	} while (c != '\n'); // fin de línea de la entrada de datos
	cout << "El número de blancos es: " << cont << endl;
}
  

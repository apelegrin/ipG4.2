#include <iostream>

using namespace std;


int main() {
	
	/* Lexico */
	const float LIMITE = 5.0;
	float suma; // valor de la suma de términos en un momento determinado
	int cuenta; // cuenta el número de términos y lo utilizamos de divisor
	
	/* Algoritmo */

	cuenta=0;
	suma=0.0;
	while (suma <= LIMITE) {
		cuenta = cuenta + 1;
		suma = suma + 1.0/cuenta;
	};
	cout << "El número de términos es " << cuenta << " para un valor de " << LIMITE;
}
  

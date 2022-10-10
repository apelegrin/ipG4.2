#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float factorial(float n) {
	int i;
	float fact;

	fact = 1;
	i = 0;
	while (i < n) {
		i++;
		fact = fact * i;
	}
	return fact;
}

float potencia(int x, int y) {
	float pot;

	switch (y) {
		case 0: 
			pot = 1;
			break;
        case 1: 
			pot = x;
			break;
		default:
			pot = x;
			for (int i=2; i <= y; i++) 
              pot = pot * x;
	}
	return pot;
}


int main() {

	/* Lexico */
	int x;
	int n;
	float suma;
	
	/* Algoritmo */
	// verificar x=8 n=15
	cout << fixed;
	cout << "Introduce el valor de x para e^x > : ";
	cin >> x;
	cout << "Introduce un número de términos a aproximar > ";
	cin >> n;
	cout << setprecision(4);
	suma = 0;
    for (int i=0; i <= n; i++) {
        suma = suma + ( potencia(x,i) / factorial(i) );
    }
	cout << "e^" << x << "=" << suma << endl;
	cout << "e^" << x << "=" << exp(x) << endl;
}
  

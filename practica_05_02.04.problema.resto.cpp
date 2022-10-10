#include <iostream>

using namespace std;

int main() {
	
	/* Lexico */
	int dividendo, divisor;
	int cociente, resto;
	int prueba;
	
	/* Algoritmo */
	dividendo = 0;
	divisor = 0;
	cociente = 0;
	cout << "Introduce el dividendo y divisor : ";
	cin >> dividendo >> divisor;
	resto = dividendo;
	if ((dividendo >= divisor) && (divisor != 0)){
		while (resto >= divisor) 
		{
			resto = resto - divisor;
			cociente++;
		};
		cout << dividendo <<" dividido entre " << divisor;
		cout << " = " << cociente << " resto = " << resto << endl; 
		prueba = divisor * cociente + resto;
		cout << "Prueba division " << dividendo << " = " << prueba;
	}
	else {
		cout << "Datos no válidos " << endl;
	}
}
  

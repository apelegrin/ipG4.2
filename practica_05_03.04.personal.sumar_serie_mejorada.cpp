#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

//revisar ejercicio

int main() {

	/* Lexico */
	int x;
	int n;
	float serie, anterior;
	
	/* Algoritmo */
	// verificar x=3 n=20
	cout << fixed;
	cout << "Introduce el valor de x para e^x > : ";
	cin >> x;
	cout << "Introduce un número de términos a aproximar > ";
	cin >> n;
	cout << setprecision(4);
	anterior = 3;
    serie = 1+anterior;
	for (int i=2; i <= n;i++) {
       serie = serie + (anterior * (x/i));
       anterior = anterior * (x/i);
    }
	cout << "e^" << x << "=" << serie << endl;
	cout << "e^" << x << "=" << exp(x) << endl;
}
  

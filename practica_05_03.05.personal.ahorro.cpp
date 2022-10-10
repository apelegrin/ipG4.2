#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

	/* Lexico */
	const float saldoInicial = 125;
	int meses;
	float saldo, m;
	
	/* Algoritmo */
	// verificar x=3 n=20
	cout << fixed;
	cout << setprecision(2);
	cout << "Introduce el valor en euros a disponer > ";
	cin >> m;
	saldo = saldoInicial;
    meses =0;
    while (saldo < m) {
       saldo = saldo + ((0.04/12) * saldo) + 180;
       meses = meses+1;
    }
	
	cout << "Para obtener un saldo de " << m << " se necesitan " << meses << " meses";
}
  

#include <iostream>

using namespace std;


int main() {
	
	/* Lexico */
	int x, y, i, p;
	
	/* Algoritmo */
	cout << "Introduce los valores de x e y ";
	cin >> x >> y;
	p = 1;
	// obtener primer término 2^x
	for (i = 1; i <= x; i++) {
		p = p*2;
	}
	cout << p << endl;
	//iterar desde 2^x+1 hasta y
	for (i = x+1; i <= y; i++) {
		p = p*2;
		cout << p << endl;
	}
	return 0;
}
  

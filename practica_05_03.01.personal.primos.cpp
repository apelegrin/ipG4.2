#include <iostream>

using namespace std;
/* primera aproximación */

bool esPrimo(int n){
	int j;
	bool primo;
	
	if (n == 1) {
       primo = true;
    }
    else {
           j = 2;
           while ((n % j) != 0)  {
               j++;
           }
           if (j == n)
              primo = true;
           else
              primo = false;
    }
	return primo;
}

int main() {

	/* Lexico */
	int n;
	
	/* Algoritmo */
	cout << "Introduce un número : ";
	cin >> n;
	if (esPrimo(n))
		cout << n << " es primo" << endl;
	else
		cout << n << " NO es primo" << endl;
}
  

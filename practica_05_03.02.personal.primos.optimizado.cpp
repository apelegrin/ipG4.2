#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int n){
	int i;
	float ra;
	bool primo = false;
	
	if (n == 1){
			primo = false;
	}
	else {
			if ((n % 2) == 0){
				primo = false;
			}
			else {
				ra = sqrt(n);
				cout << "raiz "<< ra << endl;
				i=2;
				while (((n % i) != 0) && (i < ra)){
						cout << i << endl;
						i++;
				}
				if ((n % i)==0) {
						primo = false;
				}
				else{
						primo = true;
				}
			}
	}
	return primo;
	 

}

int main() 
{

	/* Lexico */
	int n;

	/* Algoritmo */
	do {
		cout << "Dame un número > 0 ";
		cin >> n;
	} while (n <= 0);
	
	if (esPrimo(n)){
		cout << n  << " es primo " ;
	}
	else {
		cout << n  << " NO es primo " ;
	}
}
  










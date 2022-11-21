#include <iostream>
#include <fstream>
#include <list>
#include <map>

using namespace std;

#include "Secuencias.cpp"

typedef map<char,int> TipoHistograma;

int main () {

	/* Lexico */
	list<char> S;
	list<char>::iterator EA;
	
	TipoHistograma histo;
	
	/* Inicializar el histograma */
	for (char c='a'; c <= 'z';c++){
		histo[c] = 0;
	}
	
	cargarFichero(S,"entrada8.1.txt");
	
	/* Esquema de recorrido primer modelo */
	EA = S.begin();
	
	while (EA != S.end()){
		/* tratamiento */
		if (*EA != ' '){
			histo[*EA]++;
		}	
		/* Avanzar */
		EA++;
	}
	
	/* Imprimir datos */
	for (char c='a'; c <= 'z';c++){
		cout << c << " - " << histo[c] << endl;
	}
}


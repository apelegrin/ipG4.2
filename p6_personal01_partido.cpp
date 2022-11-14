#include <iostream>
#include <fstream>
#include <list>
#include <string>


using namespace std;

const char MARCA_FIN_LINEA = '\n';

void cargarFichero (list<char> &S,string nombreFichero){
	ifstream f;
	f.open(nombreFichero.c_str());
	string cadena;
	unsigned int i;
	
	if(!f) {
		cout << "Error abriendo fichero" << endl;
	}
	else{
		//carga la entrada en la lista
		S.clear(); //borramos las lista antes de cargarla
		while (getline(f, cadena)) {
			for (i=0; i<cadena.length(); i++) {
				S.push_back (cadena[i]);
			}
			S.push_back (MARCA_FIN_LINEA);
		}//end-while
	}//end-else
};

void guardarFichero (list<char> S, string nombre) {
	ofstream f;
	list<char>::iterator EA;

	f.open (nombre.c_str());
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();
		while (EA != S.end()) {
			if (*EA == MARCA_FIN_LINEA) {
				f << endl;
			} else {
				f << *EA;
			}//end-if
			EA++;
		}//end-while
		f.close();
	}
};

////////////////////////////////

struct Partido {
	int juego1, juego2;
	int parcial1, parcial2;
};

void imprimirPunto(int punto) {
	switch(punto) {
		case 0:
		cout << " nada ";
		break;
		case 1:
		cout << " quince ";
		break;
		case 2:
		cout << " treinta ";
		break;
		case 3:
		cout << " cuarenta ";
		break;
		case 4:
		cout << " juego para el jugador1 ";
		break;
		case 5:
		cout << " juego para el jugador2 ";
		break;
	}
}

void marcador(char punto,Partido &partido) {
	
	if (punto == '1') {
		partido.parcial1++;
	} else {
		partido.parcial2++;	
	}
	
	if (partido.parcial1 == 4) {
		imprimirPunto(4);
		partido.juego1++;
		partido.parcial1 = 0;
		partido.parcial2 = 0;
	}	
}

int main(){
	/* Lexico */
	Partido miPartido;
	list<char> S;
	list<char>::iterator EA;
	char punto;
	
	//Inicializar partido
	miPartido.juego1 = 0;
	miPartido.juego2 = 0;
	miPartido.parcial1 = 0;
	miPartido.parcial2 = 0;
	
	cargarFichero(S,"partido.txt");
	
	//Comenzar(S)
	EA = S.begin();
	while (EA != S.end()){
		/* Procesar */
		punto = *EA;
		cout << punto << " ";
		marcador(punto,miPartido);
		/* Avanzar */
		EA++;
	}	
	/* Procesado final */
	
}

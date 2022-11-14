#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

const char MARCA_FIN_LINEA = '\n';

void cargarFichero (list<char> &S,string nombreFichero){
	ifstream f;
	f.open(nombreFichero);
	string cadena;
	int i;
	
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

	f.open (nombre);
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

int main(){
	/* Distancia entre los juegos de caracteres mayúsculas y minúsculas: */
	const int Distancia = int('a') - int('A');

	list<char> S, R;
    list<char>::iterator EA;

	//Almacenamos el caracter convertido
    char cConv;
    cout << "Cargando fichero..." << endl;
    cargarFichero (S, "entrada1.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial*/
	EA = S.begin();
	while (EA != S.end()) {
		if ((*EA >= 'a') && (*EA <= 'z')) {
			cConv = char(int(*EA)-Distancia);
		}
		else {
			cConv = *EA;
		}
		R.push_back (cConv); /* Registrar(R, c_conv) */
		EA++;
	}//end-while
	guardarFichero (R, "salida1.txt");
	cout << "Fichero de salida almacenado" << endl;
	return 0;
}





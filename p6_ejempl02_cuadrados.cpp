#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

const char MARCA_FIN_LINEA = '\n';

void cargarFicheroInt (list<int> &S,string nombreFichero){
	ifstream f;
	f.open(nombreFichero);
	int dato;
	
	if(!f) {
		cout << "Error abriendo fichero" << endl;
	}
	else{
		//carga la entrada en la lista
		S.clear(); //borramos las lista antes de cargarla
		while (f >> dato) { //mientras tenga datos
			S.push_back (dato);
		}//end-while
		f.close();
	}//end-else
};

void guardarFicheroInt (list<int> S, string nombre) {
	ofstream f;
	list<int>::iterator EA;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();
		while (EA != S.end()) {
			f << *EA << " ";
			EA++;
		}//end-while
		f << endl;
		f.close();
	}
};

int main(){
	
	list<int> S, R;
    list<int>::iterator EA;
    int cuadrado;
    
	cout << "Cargando fichero..." << endl;
    cargarFicheroInt (S, "entrada2.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial*/
	EA = S.begin();
	while (EA != S.end()) {
		cout << *EA << ", ";
		cuadrado = (*EA) * (*EA);
		R.push_back (cuadrado); /* Registrar(R, c_conv) */
		EA++;
	}//end-while
	guardarFicheroInt (R, "salida2.int.txt");
	cout << "Fichero de salida almacenado" << endl;
	return 0;
}





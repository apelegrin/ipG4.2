#include <iostream>
#include <fstream>
#include <list>
#include <string>


using namespace std;

////////////////////////////////


void cargarFichero (list<int> &S,string nombreFichero){
	ifstream f;
	f.open(nombreFichero.c_str());
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

void guardarFichero (list<int> S, string nombre) {
	ofstream f;
	list<int>::iterator EA;

	f.open (nombre.c_str());
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

////////////////////////////////

int main(){

	/* Lexico */
	list<int> S;
	list<int> T;
	list<int>::iterator EA;
	int suma;
	
	cargarFichero(S,"entrada4.txt");
	
	/* Primer esquema de recorrido del primer modelo de acceso secuencial*/
	suma = 0;
	/* Comenzar(S) */
	EA = S.begin(); 
	while (EA != S.end()){
		/* Procesar */
		suma = suma + *EA;
		cout << suma << " ";
		/* salvamos las sumas parciales en la secuencia de salida */
		T.push_back(suma);
		/* Avanzar */
		EA++;
	}
	/* Procesado final */
	guardarFichero(T,"salida4.txt");	
}

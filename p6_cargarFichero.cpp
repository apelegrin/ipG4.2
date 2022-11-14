#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

const char MARCA_FIN_LINEA = '\n';

void cargarFichero (list<char> &S,string nombreFichero){
	ifstream f;
	f.open(nombreFichero);
	
	if(!f) {
		cout << "Error abriendo fichero" << endl;
	}
	else{
		//carga la entrada en la lista
		S.clear(); //borramos las lista antes de cargarla
	}
}

int main(){

}





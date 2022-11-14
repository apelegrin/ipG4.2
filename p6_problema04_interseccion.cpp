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
	list<int> S1;
	list<int> S2;
	list<int> T;
	list<int>::iterator EA_S1;
	list<int>::iterator EA_S2;
	
	int head1;
	int head2;
	
	cargarFichero(S1,"entrada5_1.txt");
	cargarFichero(S2,"entrada5_2.txt");
	
	/* Primer esquema de recorrido del primer modelo de acceso secuencial*/
	/* Comenzar(S) */
	EA_S1 = S1.begin(); 
	EA_S2 = S2.begin(); 
	while ( (EA_S1 != S1.end()) && (EA_S2 != S2.end()) ){
		
		head1 = *EA_S1;
		head2 = *EA_S2;
		
		// Si coinciden salvar y avanzar ambas
		if (head1 == head2) {
			cout << head1 << " ";
			T.push_back(head1);
			EA_S1++;
			EA_S2++;
		}
		// Si h1 > h2 avanzar h2
		else if (head1 > head2) {
			EA_S2++;
		}
		// Si h2 > h1 avanzar h1
		else {
			EA_S1++;
		}
	}
	/* Procesado final */
	guardarFichero(T,"salida5.txt");	
}

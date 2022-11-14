#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

const char MARCA_FIN_LINEA = '\n';

void cargarFicheroFloat (list<float> &S,string nombreFichero){
	ifstream f;
	f.open(nombreFichero);
	float dato;
	
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

void guardarFicheroFloat (list<float> S, string nombre) {
	ofstream f;
	list<float>::iterator EA;

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
	
	list<float> S;
    list<float>::iterator EA;
    int numeroAprobados;
    int numeroAlumnos;
    float sumaCalificaciones;
    float mediaCalificaciones;
    float maximaCalificacion;
    
    numeroAprobados = 0;
    numeroAlumnos = 0;
    sumaCalificaciones = 0;
    mediaCalificaciones = 0;
    maximaCalificacion = 0;
    
	cout << "Cargando fichero..." << endl;
    cargarFicheroFloat (S, "entrada3.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial*/
	EA = S.begin();
	while (EA != S.end()) {
		cout << *EA << ", ";
		if (*EA >= 5.0){
			numeroAprobados++;
		}
		sumaCalificaciones = sumaCalificaciones + *EA;
		numeroAlumnos++;
		if (*EA > maximaCalificacion){
			maximaCalificacion = *EA;
		}
		EA++;
	}//end-while
	mediaCalificaciones = sumaCalificaciones / numeroAlumnos;
	cout << "El número de aprobados es " << numeroAprobados << endl;
	cout << "La media del curso es " << mediaCalificaciones << endl;
	cout << "La máxima calificación es " << maximaCalificacion << endl;
	return 0;
}





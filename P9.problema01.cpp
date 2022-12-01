#include <iostream>
#include <map>
#include <fstream>

using namespace std;

const int CURSOS = 11;
const int GRADOS = 8;

typedef int Matriz [CURSOS][GRADOS];

void cargarFichero (Matriz &S, int &NF, int &NC, string nombre) {
	ifstream f;
	int i, j;
	f.open (nombre);
	if (!f)
		cout << "Error abriendo el fichero" << endl;
	else {
		f >> NF;
		f >> NC;
		//Filas son los años
		for (i=0; i < NF; i++) {
			//Columnas los grados
			for (j=0; j < NC; j++) {
				f >> S[i][j];
			}
		}
	}
	f.close();
}

void mostrarTabla(Matriz t, int nf, int nc){
	int i, j;
	for (i = 0; i < nf; ++i) {
		for (j = 0; j < nc; ++j) {
			if (t[i][j] < 100){
				cout << " " << t[i][j] << " ";
			}
			else {
				cout << t[i][j] << " ";
			}
		}
		cout << endl;
	}
}

int buscarAnoMaxAlumnos(Matriz datosEsta,int nf,int nc){
	int sumaAno;
	int sumaAnoMax;
	int anoMax;
	
	anoMax = 0;
	sumaAnoMax = 0;
	//Filas son los años
	for (int i=0; i < nf; i++) {
		sumaAno = 0;
		//Sumamos todos los grados de ese año
		for (int j=0; j < nc; j++) {
			sumaAno = sumaAno + datosEsta[i][j];
		}
		if (sumaAno > sumaAnoMax) {
			sumaAnoMax = sumaAno;
			anoMax = i;
		}
	}
	return anoMax;
}

int buscarGradoMinAlumnos(Matriz datosEsta,int nf,int nc){
	int sumaGrado;
	int sumaGradoMin;
	int gradoMin;
	
	gradoMin = 0;
	sumaGradoMin = 9999;
	//Recorremos por grados que son las columnas
	for (int j=0; j < nc; j++) {
		sumaGrado = 0;
		//Sumamos todos los grados de ese año
		for (int i=0; i < nf; i++) {
			sumaGrado = sumaGrado + datosEsta[i][j];
		}
		if (sumaGrado < sumaGradoMin) {
			sumaGradoMin = sumaGrado;
			gradoMin = j;
		}
	}
	return gradoMin;
}

int buscarGradoAumentoProgresivo(Matriz datosEsta,int nf,int nc){
	int i,j;
	int gradoAumenta = -1;
	
	j = 0;
	while ( (j < nc) && (gradoAumenta == -1) ){
		//Para la titulación j vemos si va aumentando
		i=1;
		while ((i < nf) && (datosEsta[i][j] > datosEsta[i-1][j])){
			i++;
		}
		//Hemos encontrado un grado que aumenta
		if (i == nf) {
			gradoAumenta = j;
		}
		//Seguimos con siguiente grado
		j++;
	}
	return gradoAumenta;
	
}

int main () {

	Matriz datosEsta;
	int nf,nc;
	int anoMaxAlumnos;
	int gradoMinAlumnos;
	int gradoAumentoProgresivo;
	
	
	cargarFichero(datosEsta,nf,nc,"egresados.txt");
	
	mostrarTabla(datosEsta,nf,nc);
	
	anoMaxAlumnos = 0;
	gradoMinAlumnos = 0;
	anoMaxAlumnos = 1990+buscarAnoMaxAlumnos(datosEsta,nf,nc);
	gradoMinAlumnos = buscarGradoMinAlumnos(datosEsta,nf,nc);
	gradoAumentoProgresivo = buscarGradoAumentoProgresivo(datosEsta,nf,nc);
	cout << "El curso con más   egresados fue " << anoMaxAlumnos << endl;
	cout << "El grado con menos egresados fue " << gradoMinAlumnos << endl;
	cout << "El grado que aumenta         fue " << gradoAumentoProgresivo << endl;
}		





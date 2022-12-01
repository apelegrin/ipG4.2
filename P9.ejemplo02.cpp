#include <iostream>
#include <map>

using namespace std;

enum DiasSemana { lunes, martes, miercoles, jueves, viernes, sabado, domingo };

typedef map <DiasSemana, map <char, float>> MiTipoTabla;

int main () {
		MiTipoTabla t;
		DiasSemana d;
		char c;

		// Inicialización:
		// Ojo: Los operadores ++ y -- no están definidos 
		// para enumerados.
		
		for (d = lunes; d <= domingo; d = DiasSemana (d+1)) {
			for (c = 'a'; c <= 'z'; c++) {
				t[d][c] = 0.0;
			}
		}
		
		for (c = 'a'; c <= 'z'; c++) {
				t[domingo][c] = t[domingo][c] + 1 ;
			}
		t[martes]['f'] = 7.5;
		//IMPRIMIR TABLA
		cout << "  ";
		for (c = 'a'; c <= 'z'; c++) {
			cout << c << " ";
		}
		cout << endl;
		for (d = lunes; d <= domingo; d = DiasSemana (d+1)) {
			cout << d << "|";
			for (c = 'a'; c <= 'z'; c++) {
				cout << t[d][c] << " ";
			}
			cout << endl;
		}
}		





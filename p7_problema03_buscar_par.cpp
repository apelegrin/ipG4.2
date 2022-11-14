

#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

#include "Secuencias.cpp"
bool esPar(int dato){
	return( (dato % 2)== 0 );
}

int main(){
   /* Lexico */
    list<int> S;
    list<int>::iterator EA;	
	
   /* Primero modelo de acceso secuencial*/
   
   /* Iniciar */
   cargarFichero(S,"entrada7.3.txt");
   
   EA = S.begin();
   
   /* Tratamiento de la secuencia vacía */
   if (EA == S.end()){
	   cout << "NO hay datos " << endl;
   }
   /* Tratamiento general */
   else {
	   
	   /* Mientras no fin tratar elementos */
	   while ( (EA != S.end()) && (!esPar(*EA)) ){
		   /* Avanzar */
		   cout << *EA << endl;
		   EA++;
	   }
	   /* Determinar el fin de la iteración */
	   if (EA == S.end()) {
		   cout << "No se ha encontrado un elemento par" <<endl;
	   } else {
		   cout << "Encontrado " << *EA <<endl;
	   }
   }
   

}
  

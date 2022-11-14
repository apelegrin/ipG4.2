

#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

#include "Secuencias.cpp"

int main(){
   /* Lexico */
    list<int> S,R;
    list<int>::iterator EA;	
    int elementoActual;
    int elementoAnterior;
	
   /* Primero modelo de acceso secuencial*/
   
   /* Iniciar */
   cargarFichero(S,"entrada7.2.txt");
   
   EA = S.begin();
   
   /* Tratamiento de la secuencia vacía */
   if (EA == S.end()){
	   cout << "NO hay datos " << endl;
   }
   /* Tratamiento general */
   else {
	   /* Tratamiento del primer elemento */
	   elementoAnterior = *EA;
	   EA++;
	   /* Mientras no fin tratar elementos */
	   while (EA != S.end()){
		   /* Tratar */
		   elementoActual = elementoAnterior + *EA;
		   R.push_back(elementoActual);
		   elementoAnterior = *EA;
		   /* Avanzar */
		   EA++;
	   }
	   /* Procesado final */
	   guardarFichero(R,"salida7.2.txt");
   }
   

}
  

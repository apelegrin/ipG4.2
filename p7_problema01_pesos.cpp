

#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

#include "Secuencias.cpp"

int main(){
   /* Lexico */
    list<float> S;
    list<float>::iterator EA;	
    float media, sumaPesos;
    int numAlumnos;
    int menor40, entre40_50, mayor50;
	
   /* Segundo modelo de acceso secuencial*/
   
   /* Iniciar */
   cargarFichero(S,"entrada-pesos.txt");
   
   EA = S.begin();
   
   /* Tratamiento de la secuencia vacía */
   if (EA == S.end()){
	   cout << "NO hay alumnos " << endl;
   }
   /* Tratamiento general */
   else {
	   /* Inicio del tratamiento */
	   media 		= 0.0;
	   sumaPesos 	= 0;
	   numAlumnos 	= 0;
	   menor40 		= 0;
	   entre40_50 	= 0;
	   mayor50 		= 0;
	   
	   sumaPesos = sumaPesos + *EA;
	   numAlumnos++;
	   
	   /* Tratamiento EA */
	   if (*EA < 40) {
		  menor40++;
	   }
	   else if (*EA <= 50){
		  entre40_50++;
	   }
	   else {
		  mayor50++;
	   }
		  
	   /* Repetir hasta es último */
	   do {
	      /* Avanzar */
	      EA++;
	      /* Tratamiento EA */
	      if (*EA < 40) {
			  menor40++;
		  }
		  else if (*EA <= 50){
			  entre40_50++;
		  }
		  else {
			  mayor50++;
		  }
		  sumaPesos = sumaPesos + *EA;
	      numAlumnos++;
	   }while (EA != S.end());
	   /* Procesado final */
	   media = sumaPesos/numAlumnos;
	   cout << "Hay " <<menor40   <<" alumnos menores a 40kg"<<endl;
	   cout << "Hay " <<entre40_50<<" alumnos entra 40kg y 50 kg"<<endl;
	   cout << "Hay " <<mayor50   <<" alumnos amyores a 50kg"<<endl;
	   cout << "La media de peso es " <<media<<endl;
   }
  

}


#include <iostream>

using namespace std;

// frecuenciaLetras = Tipo Tabla ['A','Z'] de Entero

#define TAM_HISTORIAL 'Z'-'A' + 1
#define elementoHisto(h,c) h[(c) - 'A']

int main(){
    int frecLetras[TAM_HISTORIAL];
    
    elementoHisto(frecLetras,'A') = 1;
    
    cout << elementoHisto(frecLetras,'A');
    
return 0;
}	





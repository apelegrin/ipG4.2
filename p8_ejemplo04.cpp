#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef map<char,int> tipoHistograma;

int main(){
	char op;
	
    tipoHistograma frecuenciaLetras;
    
    for (char c='a'; c<='z';c++){
		frecuenciaLetras[c] = 0;
	}
	op = 'm';
	
	frecuenciaLetras['m'] = frecuenciaLetras['m'] + 1;
	cout << "Valor " << frecuenciaLetras['m'] << endl;
    
    frecuenciaLetras[op] = 7;
    cout << "Valor " << frecuenciaLetras[op] << endl;
return 0;
}	





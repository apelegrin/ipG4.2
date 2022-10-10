#include <iostream>

using namespace std;

void tipoCaracter(char c){
	cout << ">" << c <<"< ";
	if ((c >= 'a') && (c <= 'z')) {
		cout << "Es una minúscula" << endl; }
	else if ((c >= 'A') &&  (c <= 'Z')) {
		cout << "Es una mayúscula" << endl; }
	else if ((c >= '0') &&  (c <= '9')) {
		cout << "Es un dígito" << endl; }
	else if (c == ' ') {
		cout << "Es un espacio" << endl; }	
	else if ((c == ',') || (c == '.') || (c == ':') || (c == ';')) {
		cout << "Es un signo de puntuación" << endl; }
	else {
		cout << "Carácter desconocido" << endl; }
}

int main() {
	
	/* Lexico */
	int cont; // contador de blancos
	char c; // carácter actual
	
	/* Algoritmo */
	cont = 0;
	cout << "Escribe una línea : ";
	cin.get(c);
	while (c != '\n') // fin de línea de la entrada de datos
	{
		tipoCaracter(c);
		cin.get(c);
	};
	cout << "El número de blancos es: " << cont << endl;
}
  

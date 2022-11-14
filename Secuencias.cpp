const char MARCA_FIN_LINEA = '\n';

void Guardar_Fichero (list<char> S, string nombre) {
	ofstream f;
	list<char>::iterator EA;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();	
		while (EA != S.end()) {	
			if (*EA == MARCA_FIN_LINEA) {
				f << endl;
			} else {
				f << *EA;
			}
			EA++;
		}
		f.close();
	}
}

void Cargar_Fichero (list<char> &S, string nombre) {
	ifstream f;
	string cadena;
	int i;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear(); // Borra el contenido previo de la lista
		while (getline(f, cadena)) {
			for (i=0; i< (int) cadena.length(); i++) {
				S.push_back (cadena[i]);
			}
			S.push_back (MARCA_FIN_LINEA);
		}
	}
	f.close();
}

void Guardar_Fichero (list<float> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
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
			}
			f.close();
	}
}

void Cargar_Fichero (list<float> &S, string nombre) {

	ifstream f;
	float dato;
		
	f.open (nombre);
	if (!f) {
			cout << "Error abriendo el fichero de datos" << endl;
	}
	else	{
			while (f >> dato) { // mientras la lectura sea exitosa
				S.push_back (dato); // Registrar (S, dato)
			}
			f.close();
	}
}

void Guardar_Fichero (list<int> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
	ofstream f;
	list<int>::iterator EA;

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
			}
			f.close();
	}
}

void Cargar_Fichero (list<int> &S, string nombre) {

	ifstream f;
	int dato;
		
	f.open (nombre);
	if (!f) {
			cout << "Error abriendo el fichero de datos" << endl;
	}
	else	{
			while (f >> dato) { // mientras la lectura sea exitosa
				S.push_back (dato); // Registrar (S, dato)
			}
			f.close();
	}
}

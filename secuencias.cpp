const char MARCA_FIN_LINEA = '\n';



void cargarFichero (list<char> &S,string nombreFichero){
	ifstream f;
	f.open(nombreFichero.c_str());
	string cadena;
	int i;
	
	if(!f) {
		cout << "Error abriendo fichero" << endl;
	}
	else{
		//carga la entrada en la lista
		S.clear(); //borramos las lista antes de cargarla
		while (getline(f, cadena)) {
			for (i=0; i<cadena.length(); i++) {
				S.push_back (cadena[i]);
			}
			S.push_back (MARCA_FIN_LINEA);
		}//end-while
	}//end-else
};

void guardarFichero (list<char> S, string nombre) {
	ofstream f;
	list<char>::iterator EA;

	f.open (nombre.c_str());
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
			}//end-if
			EA++;
		}//end-while
		f.close();
	}
};

////////////////////////////////


void cargarFichero (list<int> &S,string nombreFichero){
	ifstream f;
	f.open(nombreFichero.c_str());
	int dato;
	
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

void guardarFichero (list<int> S, string nombre) {
	ofstream f;
	list<int>::iterator EA;

	f.open (nombre.c_str());
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

////////////////////////////////


void cargarFichero (list<float> &S, string nombre) {
	ifstream f;
	float dato;
	
	f.open (nombre.c_str());
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear(); // Borra el contenido previo de la lista
		while (f >> dato) {
			S.push_back(dato);
		}
	}
	f.close();
};

void guardarFichero (list<float> S, string nombre) {
	ofstream f;
	list<float>::iterator EA;

	f.open (nombre.c_str());
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
		f.close();
	}
};

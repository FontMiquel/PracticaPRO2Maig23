

class Procesador {
private:
	string id;
	unsigned int memoria;
	Procesador* sucesor1;
	Procesador* sucesor2;
	set<ProcesoActivo*> procesoActivo;

public:
	Procesador();
	~Procesador();

	inicializa();
};
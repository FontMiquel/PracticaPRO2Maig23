
class Procesador {
private:
	//Atributos
	string id;
	unsigned int memoria;

	//Relaciones
	Procesador* sucesor1;
	Procesador* sucesor2;
	set<ProcesoActivo*> procesosActivos;
	
	//Clave externa: id
	static map<string, Procesador> procesadores;

public:
	Procesador();
	~Procesador();

	inicializa();
};
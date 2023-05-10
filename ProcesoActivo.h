
class ProcesoActivo : public Proceso {
private:
	//Atributos
	unsigned int ttl;

	//Relaciones
	Procesador* procesador;

	//Clave externa: pid + Procesador::id
	static map<pair<int,string>, ProcesoActivo*> procesosActivos; 
	
public:
	ProcesoActivo();
	~ProcesoActivo();
};

class ProcesoActivo : public Proceso {
private:
	Procesador* procesador;
	unsigned int ttl;
	static set<ProcesoActivo*> procesosActivos;
	
public:
	ProcesoActivo();
	~ProcesoActivo();
};
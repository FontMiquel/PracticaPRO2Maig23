#include "Proceso.h"
using namespace std;

class Prioridad;

class ProcesoPendiente : public Proceso {
private:
	//Relaciones
	Prioridad* prioridad;

	//Clave externa: pid + Prioridad::id
	static map<pair<int,string>, ProcesoPendiente> procesosPendientes; 

public:
	ProcesoPendiente();
	~ProcesoPendiente();
	
};
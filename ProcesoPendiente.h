#include <iostream>
#include <map>
using namespace std;

#include "Proceso.h"

class ProcesoPendiente : public Proceso {
private:
	//Clave externa: pid + Prioridad::id
	static map<pair<int,string>, ProcesoPendiente> procesosPendientes; 

public:
	ProcesoPendiente() : Proceso() {};
	~ProcesoPendiente();
	
	// Alta --------------------------------

	static ProcesoPendiente* alta(const unsigned int pid, const unsigned int memoria_estimada,
					 	   		  const unsigned int ttl_estimado, const string& idPrioridad);

	// Consultoras --------------------------------

	static bool existe(const unsigned int pid, const string& id);

	// Output --------------------------------

	static void imprimirTodo();
	void imprimir();
};
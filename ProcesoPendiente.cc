#include "ProcesoPendiente.h"

map<pair<int,string>, ProcesoPendiente> ProcesoPendiente::procesosPendientes;


ProcesoPendiente::~ProcesoPendiente(){}

// Alta -----------------------------------------------------------------------

ProcesoPendiente* ProcesoPendiente::alta(const unsigned int pid, const unsigned int memoria_estimada,
					 	  				 const unsigned int ttl_estimado, const string& idPrioridad) {
	ProcesoPendiente p;
	p.pid = pid;
	p.memoria_estimada = memoria_estimada;
	p.ttl_estimado = ttl_estimado;

	procesosPendientes[{pid, idPrioridad}] = p;
	return &procesosPendientes[{pid, idPrioridad}];
}

// Consultoras ----------------------------------------------------------------

bool ProcesoPendiente::existe(const unsigned int pid, const string& id) {
	return procesosPendientes.find({pid, id}) != procesosPendientes.end();
}

// Output ---------------------------------------------------------------------

void ProcesoPendiente::imprimirTodo() {
	cout << string(12, '-') << " Procesos Pendientes " << string(12, '-') << endl;
	for (auto [key, proceso] : procesosPendientes) proceso.imprimir();
	cout << string(24 + 21, '-') << endl;
}

void ProcesoPendiente::imprimir() {
	cout << "Proceso " << pid << ": memoria estim. = " << memoria_estimada;
	cout << ", ttl estim. = " << ttl_estimado << endl;
}
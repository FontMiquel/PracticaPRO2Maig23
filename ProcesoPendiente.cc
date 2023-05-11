#include "ProcesoPendiente.h"

map<pair<int,string>, ProcesoPendiente> ProcesoPendiente::procesosPendientes;


ProcesoPendiente::~ProcesoPendiente(){}

ProcesoPendiente* ProcesoPendiente::alta(const unsigned int pid, const unsigned int memoria_estimada,
					 	  				 const unsigned int ttl_estimado, const string& idPrioridad) {
	ProcesoPendiente p;
	p.pid = pid;
	p.memoria_estimada = memoria_estimada;
	p.ttl_estimado = ttl_estimado;

	procesosPendientes[{pid, idPrioridad}] = p;
	return &procesosPendientes[{pid, idPrioridad}];
}


bool ProcesoPendiente::existe(const unsigned int pid, const string& id) {
	return procesosPendientes.find({pid, id}) != procesosPendientes.end();
}


void ProcesoPendiente::imprimirTodo() {
	cout << string(10, '-') << " Procesos Pendientes " << string(10, '-') << endl;
	for (auto [key, proceso] : procesosPendientes) proceso.imprimir();
	cout << string(20 + 21, '-') << endl;
}

void ProcesoPendiente::imprimir() {
	cout << pid << ' ' << memoria_estimada << ' ' << ttl_estimado << endl;
}
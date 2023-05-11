#include "Prioridad.h"
#include "ProcesoPendiente.h"

map<string, Prioridad> Prioridad::prioridades;

Prioridad::Prioridad(){}
Prioridad::~Prioridad(){}

// Prioridades ----------------------------------------------------------------

Prioridad* Prioridad::alta(const string& id) {
	Prioridad p;
	p.id = id;
	prioridades[id] = p;
	return &prioridades[id];
}

void Prioridad::baja() {
	prioridades.erase(id);
}

// Procesos -------------------------------------------------------------------

void Prioridad::altaProceso(const unsigned int pid, const unsigned int memoria_estimada,
					 		const unsigned int ttl_estimado) {
	if (ProcesoPendiente::existe(pid, id)) {
		cout << "El proceso ya existe" << endl;
	}
	else {
		ProcesoPendiente *p = ProcesoPendiente::alta(pid, memoria_estimada, ttl_estimado, id);
		procesosPendientes.insert(p);
		ordenProcesos.push(p);
		ProcesoPendiente::imprimirTodo();
	}
}

// Consultoras ----------------------------------------------------------------

bool Prioridad::existe(const string& id) {
	return prioridades.find(id) != prioridades.end();
}

Prioridad* Prioridad::getPrioridad(const string& id) {
	if (existe(id)) return &prioridades[id];
	else return nullptr;
}

unsigned int Prioridad::numeroProcesos() const {
	return procesosPendientes.size();
}

// Output ---------------------------------------------------------------------

void Prioridad::imprimirTodo() {
	for (auto [key, prioridad] : prioridades) prioridad.imprimir();
}

void Prioridad::imprimir() const {
	queue<ProcesoPendiente*> aux = ordenProcesos;

	cout << "Prioridad: " << id << endl;

	while (not aux.empty()) {
		cout << "	";
		ProcesoPendiente *p = aux.front(); aux.pop();
		p->imprimir();
	}
	
}
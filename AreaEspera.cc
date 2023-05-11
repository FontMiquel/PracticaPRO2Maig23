#include "AreaEspera.h"
#include "Prioridad.h"

AreaEspera::AreaEspera(){}
AreaEspera::~AreaEspera(){}

// Prioridades ----------------------------------------------------------------

void AreaEspera::altaPrioridad() {
	string id;
	cin >> id;
	if (Prioridad::existe(id)){
		cout << "La prioridad ya existe" << endl;
	}
	else {
		Prioridad *p = Prioridad::alta(id);
		prioridades.insert(p);
	}
}

void AreaEspera::bajaPrioridad() {
	string id;
	cin >> id;
	Prioridad *p = Prioridad::getPrioridad(id);
	if (p == nullptr) {
		cout << "La prioridad no existe" << endl;
	}
	else if (p->numeroProcesos() > 0) {
		cout << "La prioridad tiene procesos pendientes" << endl;
	}
	else {
		prioridades.erase(p);
		p->baja();
	}
}

// Procesos -------------------------------------------------------------------

void AreaEspera::altaProceso() {
	unsigned int pid, memoria_estimada, ttl_estimado;
	string idPrioridad;
	cin >> pid >> memoria_estimada >> ttl_estimado >> idPrioridad;

	if (not Prioridad::existe(idPrioridad)) {
		cout << "La prioridad no existe" << endl;
	}
	else {
		Prioridad *p = Prioridad::getPrioridad(idPrioridad);
		p->altaProceso(pid, memoria_estimada, ttl_estimado);
	}
}

// Output ---------------------------------------------------------------------

void AreaEspera::imprimirPrioridad() const {
	string idPrioridad;
	cin >> idPrioridad;
	if (not Prioridad::existe(idPrioridad)) {
		cout << "La prioridad no existe" << endl;
	}
	else {
		Prioridad *p = Prioridad::getPrioridad(idPrioridad);
		cout << string(55, '-') << endl;
		p->imprimir();
		cout << string(55, '-') << endl;
	} 
}

void AreaEspera::imprimir() const {
	cout << string(55, '-') << endl;
	Prioridad::imprimirTodo();
	cout << string(55, '-') << endl;
}



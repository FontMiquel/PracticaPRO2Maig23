#include "AreaEspera.h"
#include "Prioridad.h"

AreaEspera::AreaEspera(){}
AreaEspera::~AreaEspera(){}


void AreaEspera::altaPrioridad() {
	string id;
	cin >> id;
	if (Prioridad::existe(id)){
		cout << "La prioridad ya existe" << endl;
	}
	else {
		Prioridad *p = Prioridad::alta(id);
		prioridades.insert(p);
		Prioridad::imprimirTodo();
	}
}

void AreaEspera::bajaPrioridad() {
	string id;
	cin >> id;
	Prioridad *p = Prioridad::getPrioridad(id);
	if (p == nullptr) {
		cout << "La prioridad no existe" << endl;
	}
	else {
		prioridades.erase(p);
		p->baja();
		Prioridad::imprimirTodo();
	}
}

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



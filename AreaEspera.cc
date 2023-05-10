#include "AreaEspera.h"
#include "Prioridad.h"

AreaEspera::AreaEspera(){}
AreaEspera::~AreaEspera(){}


void AreaEspera::altaPrioridad() {
	string id;
	cin >> id;
	Prioridad::alta(id);
}

void AreaEspera::bajaPrioridad() {
	string id;
	cin >> id;
	Prioridad *p = Prioridad::getPrioridad(id);
	if (p != nullptr) {
		prioridades.erase(p);
		*p.baja();
}
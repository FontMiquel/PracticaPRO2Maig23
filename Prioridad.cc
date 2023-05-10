#include "Prioridad.h"

map<string, Prioridad> Prioridad::prioridades;

Prioridad::Prioridad(){}
Prioridad::~Prioridad(){}

void Prioridad::alta(const string& id) {
	if (existe(id)){
		cout << "La prioridad ya existe" << endl;
	}
	else {
		Prioridad p;
		p.id = id;
		prioridades[id] = p;
	}
}


void Prioridad::baja(const string& id) {
	prioridades.erase(id);
}

bool Prioridad::existe(const string& id) {
	return prioridades.find(id) != prioridades.end();
}

void Prioridad::imprimir() const {
	for (auto [key, prioritat] : prioridades) cout << prioritat.id << endl;
}
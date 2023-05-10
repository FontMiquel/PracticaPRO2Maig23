#include "Prioridad.h"

map<string, Prioridad> Prioridad::prioridades;

Prioridad::Prioridad(){}
Prioridad::~Prioridad(){}

Prioridad* Prioridad::alta(const string& id) {
	Prioridad p;
	p.id = id;
	prioridades[id] = p;
	return &prioridades[id];
}


void Prioridad::baja() {
	prioridades.erase(id);
}

bool Prioridad::existe(const string& id) {
	return prioridades.find(id) != prioridades.end();
}

Prioridad* Prioridad::getPrioridad(const string& id) {
	if (existe(id)) return &prioridades[id];
	else return nullptr;
}

void Prioridad::imprimirTodo() {
	cout << string(10, '-') << " Prioridades " << string(10, '-') << endl;
	for (auto [key, prioritat] : prioridades) cout << prioritat.id << endl;
	cout << string(20 + 13, '-') << endl;
}

void Prioridad::imprimir() const {
	cout << id << endl;
}
#include <iostream>
#include <map>
#include <set>
#include "ProcesoPendiente.h"
using namespace std;

class Prioridad {
private:
	//Atributos
	string id;

	//Relaciones
	set<ProcesoPendiente*> procesosPendientes;

	//Clave externa: id
	static map<string, Prioridad> prioridades;	

public:
	Prioridad();
	~Prioridad();

	static Prioridad* alta(const string& id);
	void baja();

	static bool existe(const string& id);
	static Prioridad* getPrioridad(const string& id);

	void imprimir() const;
	static void imprimirTodo();
};
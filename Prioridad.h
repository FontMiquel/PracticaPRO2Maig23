#include <iostream>
#include <map>
#include <set>
using namespace std;

class ProcesoPendiente;

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

	void altaProceso(const unsigned int pid, const unsigned int memoria_estimada,
					 const unsigned int ttl_estimado);

	static bool existe(const string& id);
	static Prioridad* getPrioridad(const string& id);

	void imprimir() const;
	static void imprimirTodo();
};
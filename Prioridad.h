#include <iostream>
#include <map>
#include <set>
#include <queue>
using namespace std;

class ProcesoPendiente;

class Prioridad {
private:
	//Atributos
	string id;

	//Relaciones
	set<ProcesoPendiente*> procesosPendientes;
	queue<ProcesoPendiente*> ordenProcesos;

	//Clave externa: id
	static map<string, Prioridad> prioridades;	

public:
	Prioridad();
	~Prioridad();

	// Alta/Baja --------------------------------

	static Prioridad* alta(const string& id);
	void baja();

	// Procesos ---------------------------------

	void altaProceso(const unsigned int pid, const unsigned int memoria_estimada,
					 const unsigned int ttl_estimado);


	// Consultoras ------------------------------

	static bool existe(const string& id);
	static Prioridad* getPrioridad(const string& id);
	unsigned int numeroProcesos() const;

	// Output -----------------------------------

	void imprimir() const;
	static void imprimirTodo();
};
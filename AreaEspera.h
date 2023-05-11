#include <memory>
#include <set>
using namespace std;

class Prioridad;

class AreaEspera {
private:
	//Relaciones
	set<Prioridad*> prioridades;
public:
	AreaEspera();
	~AreaEspera();	

	// Prioridades ------------------------------

	void altaPrioridad();
	void bajaPrioridad();

	// Procesos ---------------------------------

	void altaProceso();
	// void enviaProcesos(cluster);

	// Output -----------------------------------

	void imprimirPrioridad() const;
	void imprimir() const;
};
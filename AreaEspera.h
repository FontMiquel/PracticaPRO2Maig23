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

	void altaPrioridad();
	void bajaPrioridad();
	void altaProceso();
};
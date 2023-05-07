
class ProcesoPendiente : public Proceso {
private:
	Prioridad* prioridad;
	static set<ProcesoPendiente*> procesosPendientes;

public:
	ProcesoPendiente();
	~ProcesoPendiente();
	
};
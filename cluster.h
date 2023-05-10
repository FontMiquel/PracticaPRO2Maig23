
class Cluster {
private:
	//Relaciones
	Procesador* raiz;

public:
	Cluster();
	~Cluster();

	void inicializa();
	void elimina();
};
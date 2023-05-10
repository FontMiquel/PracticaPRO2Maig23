#include <iostream>
#include "AreaEspera.h"


int main() {
	//Cluster cluster;
	//cluster.inicializa();
	AreaEspera areaEspera;
	//areaEspera.inicializa();

	string cmd;
	cin >> cmd;
	while (cmd != "fin") {
	 /* if (cmd == "configurar_cluster" or cmd == "cc") {
	  	cluster.configura();
	  }
	  else if (cmd == "modificar_cluster" or cmd == "mc") {
	  	cluster.modifica();
	  }
	  else */if (cmd == "alta_prioridad" or cmd == "ap") {
	  	areaEspera.altaPrioridad();
	  }
	  else if (cmd == "baja_prioridad" or cmd == "bp") {
	  	areaEspera.bajaPrioridad();
	  }
	  else if (cmd == "alta_proceso_espera" or cmd == "ape") {
	  	areaEspera.altaProceso();
	  }
	  /*
	  else if (cmd == "alta_proceso_procesador" or cmd == "app") {
	  	cluster.altaProceso();
	  }
	  else if (cmd == "baja_proceso_procesador" or cmd == "bpp") {
	  	cluster.bajaProceso();
	  }
	  else if (cmd == "enviar_procesos_cluster" or cmd == "epc") {
	  	areaEspera.enviaProcesos(cluster);
	  }
	  else if (cmd == "avanzar_tiempo" or cmd == "at") {
	  	cluster.avanzaTiempo();
	  }
	  else if (cmd == "imprimir_prioridad" or cmd == "ipri") {
	  	areaEspera.imprimePrioridad();
	  }
	  else if (cmd == "imprimir_area_espera" or cmd == "iae") {
	  	areaEspera.imprimir();
	  }
	  else if (cmd == "imprimir_procesador" or cmd == "ipro") {
	  	cluster.imprimirProcesador();
	  }
	  else if (cmd == "imprimir_procesadores_cluster" or cmd == "ipc") {
	  	cluster.imprimirProcesadores();
	  }
	  else if (cmd == "imprimir_estructura_cluster" or cmd == "iec") {
	  	cluster.imprimirEstructura();
	  }
	  else if (cmd == "compactar_memoria_procesador" or cmd == "cmp") {
	  	cluster.compactarMemoriaProcesador();
	  }
	  else if (cmd == "compactar_memoria_cluster" or cmd == "cmc") {
	  	cluster.compactarMemoria();
	  }
	  else if (cmd == "fin") {
	  	cout << "fin :)" << endl;
	  }*/

	  cin >> cmd;
	}
}
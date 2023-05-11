OPCIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Wno-sign-compare -std=c++17

program: cluster procesador procesoActivo procesoPendiente proceso prioridad
	g++ -o program Cluster.o Procesador.o ProcesoActivo.o ProcesoPendiente.o Proceso.o Prioridad.o

program2:  main 
	g++ -o program2 main.o Prioridad.o AreaEspera.o ProcesoPendiente.o Proceso.o

main: main.cc AreaEspera Proceso ProcesoPendiente Prioridad
	g++ -c main.cc $(OPCIONS)

Cluster: Cluster.cc Cluster.h
	g++ -c Cluster.cc $(OPCIONS)

Procesador: Procesador.cc Procesador.h
	g++ -c Procesador.cc $(OPCIONS)

ProcesoActivo: ProcesoActivo.cc ProcesoActivo.h
	g++ -c ProcesoActivo.cc $(OPCIONS)

ProcesoPendiente: ProcesoPendiente.cc ProcesoPendiente.h
	g++ -c ProcesoPendiente.cc $(OPCIONS)

Proceso: Proceso.cc Proceso.h
	g++ -c Proceso.cc $(OPCIONS)

Prioridad: Prioridad.cc Prioridad.h
	g++ -c Prioridad.cc $(OPCIONS)

AreaEspera: AreaEspera.cc AreaEspera.h 
	g++ -c AreaEspera.cc $(OPCIONS)


clean:
	rm *.o

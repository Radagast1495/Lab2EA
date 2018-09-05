#include "Animales.h"
#include <stdlib.h>


using namespace std;

class Celda {
public:

	Celda();
	Celda(Animales An);
	~Celda();

	Animales CampoAnimal;
	int EnergiaPasto;
	bool CampoOcupado;
	bool CasillasValidas [8];
	bool Vecinos [8];


};

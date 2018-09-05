#include "Celda.h"
#include <stdlib.h>

#define MAXPASTO 10
using namespace std;

Celda::~Celda() {

}
Celda::Celda() {
	this->CampoOcupado = false;
	this->EnergiaPasto = MAXPASTO;
	for (int i = 0; i < 8; i++)
	{
		this->CasillasValidas[i] = false;
	}
}

Celda::Celda(Animales An) {
	this->CampoAnimal = An;
	this->CampoOcupado = true;
}
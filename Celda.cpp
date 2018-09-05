#include "Celda.h"
#include <stdlib.h>

#define MAXPASTO 10
using namespace std;

Celda::~Celda() {

}
Celda::Celda() {
	this->CampoOcupado = false;
	this->EnergiaPasto = MAXPASTO;
}

Celda::Celda(Animales An) {
	this->CampoAnimal = An;
	this->CampoOcupado = true;
	this->EnergiaPasto=MAXPASTO;
}

#include "Animales.h"
#include "Celda.h"
#include <stdlib.h>

using namespace std;

Animales::Animales() {

}
Animales::Animales(int nEnergia, int nID, int nEspecie, int nSexo, int X, int Y) {
	this->Energia = Energia;
	this->ID = nID;
	this->Especie = nEspecie;
	this->Sexo = nSexo;
	this->XCoord = X;
	this->YCoord = Y;
	this->RandX = 0;
	this->RandY = 0;
	this->CanMove = true;
}

Animales::~Animales() {

}

int main() {
	return 0;
}
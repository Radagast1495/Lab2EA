#include "Animal.h"
#include "Celda.h"
#include <stdlib.h>

using namespace std;


Animal::Animal(int nEnergia, int nID, int nEspecie, int nSexo, int X, int Y) {
	this->Energia = Energia;
	this->ID = nID;
	this->Especie = nEspecie;
	this->Sexo = nSexo;
	this->XCoord = X;
	this->YCoord = Y;
}





void Animal::Mover() {

	switch (this->Especie)
	{
	case 0:

	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	}

}

void Animal::Comer() {

	switch (this->Especie)
	{
	case 0:

	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	}

}

void Animal::Reproducir() {

}

void Animal::Morir() {

}

int main() {
	return 0;
}

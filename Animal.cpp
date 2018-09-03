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

void Animal::RevisarVecindad(Celda (&Campo)[3][3], int PX, int PY) {

	if (&Campo[PY - 1][PX - 1] != NULL && true) {
		this->CasillasValidas[0] = true;
	}
	else if (&Campo[PY - 1][PX] != NULL && true) {
		this->CasillasValidas[1] = true;
	}
	else if (&Campo[PY - 1][PX + 1] != NULL && true) {
		this->CasillasValidas[2] = true;
	}
	else if (&Campo[PY][PX - 1] != NULL && true) {
		this->CasillasValidas[3] = true;
	}
	else if (&Campo[PY][PX + 1] != NULL && true) {
		this->CasillasValidas[4] = true;
	}
	else if (&Campo[PX - 1][PY + 1] != NULL && true) {
		this->CasillasValidas[5] = true;
	}
	else if (&Campo[PX][PY + 1] != NULL && true) {
		this->CasillasValidas[6] = true;
	}
	else if (&Campo[PX + 1][PY + 1] != NULL && true) {
		this->CasillasValidas[7] = true;
	}

	


}

void Animal::ClasificarVecindad(Celda(&Campo)[3][3], int PX, int PY) {
	if (&Campo[PY - 1][PX - 1] != NULL && true) {
		this->EspeciesVecinas[0] = Campo[PY - 1][PX - 1].Animal.Especie;
	}
	else if (&Campo[PY - 1][PX] != NULL && true) {
		this->EspeciesVecinas[1] = Campo[PY - 1][PX].Animal.Especie;;
	}
	else if (&Campo[PY - 1][PX + 1] != NULL && true) {
		this->EspeciesVecinas[2] = Campo[PY - 1][PX + 1].Animal.Especie;;
	}
	else if (&Campo[PY][PX - 1] != NULL && true) {
		this->EspeciesVecinas[3] = Campo[PY][PX - 1].Animal.Especie;;
	}
	else if (&Campo[PY][PX + 1] != NULL && true) {
		this->EspeciesVecinas[4] = CCampo[PY][PX + 1].Animal.Especie;;
	}
	else if (&Campo[PX - 1][PY + 1] != NULL && true) {
		this->EspeciesVecinas[5] = Campo[PX - 1][PY + 1].Animal.Especie;;
	}
	else if (&Campo[PX][PY + 1] != NULL && true) {
		this->EspeciesVecinas[6] = Campo[PX][PY + 1].Animal.Especie;;
	}
	else if (&Campo[PX + 1][PY + 1] != NULL && true) {
		this->EspeciesVecinas[7] = Campo[PX + 1][PY + 1].Animal.Especie;;
	}
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


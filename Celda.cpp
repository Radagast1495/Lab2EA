#include "Celda.h"

#include <stdlib.h>

using namespace std;

void Celda::RevisarVecindad(Celda (&Campo)[3][3], int PX, int PY) {

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
        int j=0;
        for(int i=0; i<7;i++){
            if(this->CasillasValidas[i]==true){
                j++;
            }
        }
        int RandVal[j];
        int k=0;
        for(int i=0; i<j;i++){
            if(this->CasillasValidas[i]==true){
                RandVal[k]=i;
                k++;
            }
        }
        int IndiceRandom=rand()%j;

}

void Celda::ClasificarVecindad(Celda(&Campo)[3][3], int PX, int PY) {
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

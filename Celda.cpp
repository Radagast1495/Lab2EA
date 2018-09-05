#include "Celda.h"

#include <stdlib.h>

using namespace std;

void Celda::RevisarVecindad(Celda (&Campo)[3][3], int PX, int PY) {
  int CasillasValidas[8]={false,false,false,false,false,false,false,false};

	if (&Campo[PY - 1][PX - 1] != NULL && this->CampoOcupado==false) {
		CasillasValidas[0] = true;
	}
	else if (&Campo[PY - 1][PX] != NULL && this->CampoOcupado==false) {
		CasillasValidas[1] = true;
	}
	else if (&Campo[PY - 1][PX + 1] != NULL && this->CampoOcupado==false) {
		CasillasValidas[2] = true;
	}
	else if (&Campo[PY][PX - 1] != NULL && this->CampoOcupado==false) {
		CasillasValidas[3] = true;
	}
	else if (&Campo[PY][PX + 1] != NULL && this->CampoOcupado==false) {
		CasillasValidas[4] = true;
	}
	else if (&Campo[PX - 1][PY + 1] != NULL && this->CampoOcupado==false) {
		CasillasValidas[5] = true;
	}
	else if (&Campo[PX][PY + 1] != NULL && this->CampoOcupado==false) {
		CasillasValidas[6] = true;
	}
	else if (&Campo[PX + 1][PY + 1] != NULL && this->CampoOcupado==false) {
		CasillasValidas[7] = true;
	}
  int j=0;
  for(int i=0; i<7;i++){
    if(CasillasValidas[i]==true){
      j++;
    }
  }
  if(j==0){
    Campo[PX][PY].CampoAnimal.CanMove=false;
  }
  int RandVal[j];
  int k=0;
  for(int i=0; i<j;i++){
      if(CasillasValidas[i]==true){
          RandVal[k]=i;
          k++;
      }
  }
  int IndiceRandom=rand()%j;
  int PosicionDeseada=RandVal[IndiceRandom];
  switch(PosicionDeseada){
    case 0:
      this->CampoAnimal.RandX=PX-1;
      this->CampoAnimal.RandY=PY-1;
    case 1:
      this->CampoAnimal.RandX=PX;
      this->CampoAnimal.RandY=PY-1;
    case 2:
      this->CampoAnimal.RandX=PX+1;
      this->CampoAnimal.RandY=PY-1;
    case 3:
      this->CampoAnimal.RandX=PX-1;
      this->CampoAnimal.RandY=PY;
    case 4:
      this->CampoAnimal.RandX=PX+1;
      this->CampoAnimal.RandY=PY;
    case 5:
      this->CampoAnimal.RandX=PX-1;
      this->CampoAnimal.RandY=PY+11;
    case 6:
      this->CampoAnimal.RandX=PX;
      this->CampoAnimal.RandY=PY+1;
    case 7:
      this->CampoAnimal.RandX=PX+1;
      this->CampoAnimal.RandY=PY+1;
  }


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



void Celda::Mover(Celda(&Campo)[3][3], int PX, int PY) {

	switch (Campo[PX][PY].CampoAnimal.Especie)
	{
	case 0:
    int MX=PX;
    int MY=PY;
		for(int i=3; i>0; i--){
				RevisarVecindad(Celda(&Campo)[3][3], int MX, int MY);
        if(Campo[PX][PY].CampoAnimal.CanMove==false){
          break;
        }
        else{
          MX=Campo[MX][MY].CampoAnimal.RandX;
          MY=Campo[MX][MY].CampoAnimal.RandY;
        }
		}
    Campo[MX][MY].CampoAnimal.RandX=0;
    Campo[MX][MY].CampoAnimal.RandY=0;
    Campo[MX][MY].CampoAnimal.CanMove=true;
    break;

	case 1:
    int MX=PX;
    int MY=PY;
    for(int i=2; i>0; i--){
        RevisarVecindad(Celda(&Campo)[3][3], int MX, int MY);
        if(Campo[PX][PY].CampoAnimal.CanMove==false){
          break;
        }
        else{
          MX=Campo[MX][MY].CampoAnimal.RandX;
          MY=Campo[MX][MY].CampoAnimal.RandY;
        }
    }
    Campo[MX][MY].CampoAnimal.RandX=0;
    Campo[MX][MY].CampoAnimal.RandY=0;
    Campo[MX][MY].CampoAnimal.CanMove=true;
    break;
	case 2:
    int MX=PX;
    int MY=PY;
    for(int i=3; i>0; i--){
        RevisarVecindad(Celda(&Campo)[3][3], int MX, int MY);
        if(Campo[PX][PY].CampoAnimal.CanMove==false){
          break;
        }
        else{
          MX=Campo[MX][MY].CampoAnimal.RandX;
          MY=Campo[MX][MY].CampoAnimal.RandY;
        }
    }
    Campo[MX][MY].CampoAnimal.RandX=0;
    Campo[MX][MY].CampoAnimal.RandY=0;
    Campo[MX][MY].CampoAnimal.CanMove=true;
    break;
	case 3:
    int MX=PX;
    int MY=PY;
    for(int i=3; i>0; i--){
        RevisarVecindad(Celda(&Campo)[3][3], int MX, int MY);
        if(Campo[PX][PY].CampoAnimal.CanMove==false){
          break;
        }
        else{
          MX=Campo[MX][MY].CampoAnimal.RandX;
          MY=Campo[MX][MY].CampoAnimal.RandY;
        }
    }
    Campo[MX][MY].CampoAnimal.RandX=0;
    Campo[MX][MY].CampoAnimal.RandY=0;
    Campo[MX][MY].CampoAnimal.CanMove=true;
    break;
	}

}

void Celda::Comer() {

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

void Celda::Reproducir() {

}

void Celda::Morir() {

}

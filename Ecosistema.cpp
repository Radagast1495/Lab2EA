#include "Ecosistema.h"

Ecosistema::Ecosistema(int M, int N) {
	this->Campo = new Celda*[M];
	for (int i = 0; i < M; i++)
	{
		this->Campo[i] = new Celda[N];
	}
}

Ecosistema::Ecosistema() {

}

Ecosistema::~Ecosistema() {

}

void Ecosistema::RevisarVecindad(int PX, int PY) {
	bool CasillasValidas[8] = { false,false,false,false,false,false,false,false };

	if (&this->Campo[PY - 1][PX - 1] != NULL && this->Campo[PY - 1][PX - 1].CampoOcupado== false) {
		CasillasValidas[0] = true;
	}
	else if (&this->Campo[PY - 1][PX] != NULL && this->Campo[PY - 1][PX].CampoOcupado == false) {
		CasillasValidas[1] = true;
	}
	else if (&this->Campo[PY - 1][PX + 1] != NULL && this->Campo[PY - 1][PX + 1].CampoOcupado == false) {
		CasillasValidas[2] = true;
	}
	else if (&this->Campo[PY][PX - 1] != NULL && this->Campo[PY][PX - 1].CampoOcupado == false) {
		CasillasValidas[3] = true;
	}
	else if (&this->Campo[PY][PX + 1] != NULL && this->Campo[PY][PX + 1].CampoOcupado == false) {
		CasillasValidas[4] = true;
	}
	else if (&this->Campo[PX - 1][PY + 1] != NULL && this->Campo[PX - 1][PY + 1].CampoOcupado == false) {
		CasillasValidas[5] = true;
	}
	else if (&this->Campo[PX][PY + 1] != NULL && this->Campo[PX][PY + 1].CampoOcupado == false) {
		CasillasValidas[6] = true;
	}
	else if (&this->Campo[PX + 1][PY + 1] != NULL && this->Campo[PX + 1][PY + 1].CampoOcupado == false) {
		CasillasValidas[7] = true;
	}
	int j = 0;
	for (int i = 0; i<7;i++) {
		if (CasillasValidas[i] == true) {
			j++;
		}
	}
	if (j == 0) {
		this->Campo[PX][PY].CampoAnimal.CanMove = false;
	}

	int RandVal[8];

	for (int i = 0; i<j;i++) {
		if (CasillasValidas[i] == true) {
			RandVal[i] = i;
		}
		else {
			RandVal[i] = 0;
		}
	}

	int IndiceRandom = rand() % j;
	bool BanderaMovimiento = false;
	int PosicionDeseada = RandVal[IndiceRandom];
	while (BanderaMovimiento == false) {
		if (PosicionDeseada == 0) {
			IndiceRandom = rand() % j;
			PosicionDeseada = RandVal[IndiceRandom];
		}
		else
		{
			BanderaMovimiento = true;
		}
	}
	switch (PosicionDeseada) {
	case 0:
		this->Campo[PX][PY].CampoAnimal.RandX = PX - 1;
		this->Campo[PX][PY].CampoAnimal.RandY = PY - 1;
	case 1:
		this->Campo[PX][PY].CampoAnimal.RandX = PX;
		this->Campo[PX][PY].CampoAnimal.RandY = PY - 1;
	case 2:
		this->Campo[PX][PY].CampoAnimal.RandX = PX + 1;
		this->Campo[PX][PY].CampoAnimal.RandY = PY - 1;
	case 3:
		this->Campo[PX][PY].CampoAnimal.RandX = PX - 1;
		this->Campo[PX][PY].CampoAnimal.RandY = PY;
	case 4:
		this->Campo[PX][PY].CampoAnimal.RandX = PX + 1;
		this->Campo[PX][PY].CampoAnimal.RandY = PY;
	case 5:
		this->Campo[PX][PY].CampoAnimal.RandX = PX - 1;
		this->Campo[PX][PY].CampoAnimal.RandY = PY + 11;
	case 6:
		this->Campo[PX][PY].CampoAnimal.RandX = PX;
		this->Campo[PX][PY].CampoAnimal.RandY = PY + 1;
	case 7:
		this->Campo[PX][PY].CampoAnimal.RandX = PX + 1;
		this->Campo[PX][PY].CampoAnimal.RandY = PY + 1;
	}


}

/*void Ecosistema::ClasificarVecindad(Celda(&Campo)[3][3], int PX, int PY) {
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
}*/



void Ecosistema::Mover(int PX, int PY) {
	int MX = PX;
	int MY = PY;
	switch (Campo[PX][PY].CampoAnimal.Especie)
	{

	case 0:
		MX = PX;
		MY = PY;
		for (int i = 3; i>0; i--) {
			RevisarVecindad(MX, MY);
			if (Campo[PX][PY].CampoAnimal.CanMove == false) {
				break;
			}
			else {
				MX = Campo[MX][MY].CampoAnimal.RandX;
				MY = Campo[MX][MY].CampoAnimal.RandY;
			}
		}
		Campo[MX][MY].CampoAnimal.RandX = 0;
		Campo[MX][MY].CampoAnimal.RandY = 0;
		Campo[MX][MY].CampoAnimal.CanMove = true;
		break;

	case 1:
		MX = PX;
		MY = PY;
		for (int i = 2; i>0; i--) {
			RevisarVecindad(MX, MY);
			if (Campo[PX][PY].CampoAnimal.CanMove == false) {
				break;
			}
			else {
				MX = Campo[MX][MY].CampoAnimal.RandX;
				MY = Campo[MX][MY].CampoAnimal.RandY;
			}
		}
		Campo[MX][MY].CampoAnimal.RandX = 0;
		Campo[MX][MY].CampoAnimal.RandY = 0;
		Campo[MX][MY].CampoAnimal.CanMove = true;
		break;
	case 2:
		MX = PX;
		MY = PY;
		for (int i = 3; i>0; i--) {
			RevisarVecindad(MX, MY);
			if (Campo[PX][PY].CampoAnimal.CanMove == false) {
				break;
			}
			else {
				MX = Campo[MX][MY].CampoAnimal.RandX;
				MY = Campo[MX][MY].CampoAnimal.RandY;
			}
		}
		Campo[MX][MY].CampoAnimal.RandX = 0;
		Campo[MX][MY].CampoAnimal.RandY = 0;
		Campo[MX][MY].CampoAnimal.CanMove = true;
		break;
	case 3:
		MX = PX;
		MY = PY;
		for (int i = 3; i>0; i--) {
			RevisarVecindad(MX, MY);
			if (Campo[PX][PY].CampoAnimal.CanMove == false) {
				break;
			}
			else {
				MX = Campo[MX][MY].CampoAnimal.RandX;
				MY = Campo[MX][MY].CampoAnimal.RandY;
			}
		}
		Campo[MX][MY].CampoAnimal.RandX = 0;
		Campo[MX][MY].CampoAnimal.RandY = 0;
		Campo[MX][MY].CampoAnimal.CanMove = true;
		break;
	}

}

void Ecosistema::Comer(int PX, int PY) {

	switch (Campo[PX][PY].CampoAnimal.Especie)
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

void Ecosistema::Reproducir() {
	Celda Ecosistema[3][3];
}

void Ecosistema::Morir() {

}
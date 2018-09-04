#include "Animal.h"
#include <stdlib.h>


using namespace std;

class Celda {
				Celda();
				~Celda();
				
				Animal CampoAnimal;
        int EnergiaPasto;
        bool CampoOcupado;

				void ClasificarVecindad(Celda(&Campo)[3][3], int PX, int PY);
				void RevisarVecindad(Celda (&Campo)[3][3], int PX, int PY);

};

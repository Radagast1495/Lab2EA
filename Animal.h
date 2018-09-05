#include <string>
#include "Celda.h"

using namespace std;

class Animal {
	public:
		Animal();
		Animal(int Energia, int ID, int Especie, int Sexo, int X, int Y);
		~Animal();

		int Energia;
		int ID;
		int Especie;
		int Sexo;
		int XCoord;
		int YCoord;
    int RandX;
    int RandY;
    bool CanMove;

		

};

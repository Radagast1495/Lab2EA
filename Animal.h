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
		bool CasillasValidas[8]= { false,false, false, false, false, false, false, false };
		string EspeciesVecinas[8];
		enum Especies {
			Lobo, Oveja, Zorro, Raton
		};

		void Mover();
		void Comer();
		void Reproducir();
		void Morir();
		void RevisarVecindad(Celda(&Matriz)[3][3], int PosX, int PosY);
		void ClasificarVecindad(Celda(&Matriz)[3][3], int PosX, int PosY);
};
#include <string>
#pragma once

using namespace std;

class Animales{
	public:
		Animales();
		Animales(int Energia, int ID, int Especie, int Sexo, int X, int Y);
		~Animales();

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

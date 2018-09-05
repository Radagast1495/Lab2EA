#pragma once
#include "Celda.h"

class Ecosistema {
	public:
		Ecosistema();
		Ecosistema(int M, int N);
		~Ecosistema();

		Celda **Campo;

		void ClasificarVecindad(int PX, int PY);
		void RevisarVecindad(int PX, int PY);
		void Mover(int PX, int PY);
		void Comer(int PX, int PY);
		void Reproducir();
		void Morir();
};


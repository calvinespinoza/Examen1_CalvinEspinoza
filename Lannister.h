#include <string>
#include <vector>
#include "GuardiaReal.h"

#ifndef LANNISTER_H
#define LANNISTER_H

using namespace std;

class Lannister
{
	private:
		string jefe;
		string animalEmblema;
		string lema;
		vector <GuardiaReal*> guardiasReales;
		int cantDinero;
		int fuerzaMontana;
		int cantIntegrantes;
		
	public:
		Lannister();
		//~Lannister();
		void eliminarLannister(int);
		//Setters
		void setJefe(string);
		void setAnimalEmblema(string);
		void setLema(string);
		void setGuardiaReal(GuardiaReal*);
		void setCantDinero(int);
		void setFuerzaMontana(int);
		void setCantIntegrantes(int);
		
		//Getters
		string getJefe();
		string getAnimalEmblema();
		string getLema();
		GuardiaReal* getGuardiaReal(int);
		int getCantDinero();
		int getFuerzaMontana();
		int getCantIntegrantes();
		
		
};

#endif

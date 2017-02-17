#include <string>
#include <vector>
#include "FamiliasNobles.h"

#ifndef STARK_H
#define STARK_H

using namespace std;

class Stark
{
	private:
		string jefe;
		int cantLobos;
		string animalEmblema;
		string lema;
		vector <FamiliasNobles*> familiasNobles;
		string guerrero;
		int cantIntegrantes;
		
	public:
		Stark();
		//~Stark();
		
		//Setters
		void setJefe(string);
		void setCantLobos(int);
		void setAnimalEmblema(string);
		void setLema(string);
		void setFamiliasNobles(FamiliasNobles*);
		void setGuerrero(string);
		void setCantIntegrantes(int);
		
		//Getters
		string getJefe();
		int getCantLobos();
		string getAnimalEmblema();
		string getLema();
		FamiliasNobles* getFamiliasNobles(int);
		string getGuerrero();
		int getCantIntegrantes();
		
		
};

#endif


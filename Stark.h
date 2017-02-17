#include <string>
#include <vector>

#ifndef STARK_H;
#define STARK_H;

class Stark
{
	private:
		string jefe;
		int cantLobos;
		string animalEmblema;
		string lema;
		vector <FamiliaNoble*> familiasNobles;
		string guerrero;
		int cantIntegrantes;
		
	public:
		Stark();
		~Stark();
		
		//Setters
		void setJefe(string);
		void setCantLobos(int);
		void setAnimalEmblema(string);
		void setLema(string);
		void setFamiliasNobles(FamiliaNoble*);
		void setGuerrero(string);
		void setCantIntegrantes(int);
		
		//Getters
		string getJefe();
		int getCantLobos();
		string getAnimalEmblema();
		string getLema();
		FamiliaNoble* getFamiliasNobles(int);
		string getGuerrero();
		int getCantIntegrantes();
		
		
};


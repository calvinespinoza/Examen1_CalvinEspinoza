#include <string>

#ifndef LANNISTER_H;
#define LANNISTER_H;

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
		~Lannister();
		
		//Setters
		void setJefe(string);
		void setAnimalEmblema(string);
		void setLema(string);
		void setGuardiasReales(GuardiaReal*);
		void setCantDinero(int);
		void setFuerzaMontana(int);
		void setCantIntegrantes(int);
		
		//Getters
		string getJefe();
		string getAnimalEmblema();
		string getLema();
		GuardiaReal* getGuardiasReales(int);
		int getCantDinero();
		int getFuerzaMontana();
		int getCantIntegrantes();
		
		
};

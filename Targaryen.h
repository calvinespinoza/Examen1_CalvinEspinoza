#include <string>

#ifndef TARGARYEN_H;
#define TARGARYEN_H;

class Targaryen
{
	private:
		string reina;
		string animalEmblema;
		string lema;
		vector <Dothraki*> Dothraki;
		int cantDragones;
		int cantBarcos;
		
	public:
		Targaryen();
		~Targaryen();
		
		//Setters
		void setReina(string);
		void setAnimalEmblema(string);
		void setLema(string);
		void setDothraki(Dothraki*);
		void setCantDragones(int);
		void setCantBarcos(int);
		
		//Getters
		string getReina();
		string getAnimalEmblema();
		string getLema();
		Dothraki* getDothraki(int);
		int getCantDragones();
		int getCantBarcos();
		
		
};

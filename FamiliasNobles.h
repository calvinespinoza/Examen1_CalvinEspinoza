#include <string>

#ifndef FAMILIASNOBLES_H
#define FAMILIASNOBLES_H

using namespace std;

class FamiliasNobles
{
	private:
		string nombre;
		string simboloEscudo;
		string lema;
		int cantPersonas;
		int ataque;
		int defensa;
		
	public:
		FamiliasNobles();
		~FamiliasNobles();
		
		//Setters
		void setNombre(string);
		void setSimboloEscudo(string);
		void setLema(string);
		void setCantPersonas(int);
		void setAtaque(int);
		void setDefensa(int);
		
		//Getters
		string getNombre();
		string getSimboloEscudo();
		string getLema();
		int getCantPersonas();
		int getAtaque();
		int getDefensa();
		
		
};

#endif

#include <string>

#ifndef FAMILIANOBLE_H;
#define FAMILIANOBLE_H;

class FamiliaNoble
{
	private:
		string nombre;
		string simboloEscudo;
		string lema;
		int cantPersonas;
		int ataque;
		int defensa;
		
	public:
		FamiliaNoble();
		~FamiliaNoble();
		
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

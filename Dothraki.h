#include <string>

#ifndef DOTHRAKI_H;
#define DOTHRAKI_H;

class Dothraki
{
	private:
		string nombre;
		string jefeBarbaro;
		string nombreCaballo;
		string colorCaballo;
		int ataque;
		int defensa;
		
	public:
		Dothraki();
		~Dothraki();
		
		//Setters
		void setNombre(string);
		void setJefeBarbaro(string);
		void setNombreCaballo(string);
		void setColorCaballo(string);
		void setAtaque(int);
		void setDefensa(int);
		
		//Getters
		string getNombre();
		string getJefeBarbaro();
		string getNombreCaballo();
		string getColorCaballo();
		int getAtaque();
		int getDefensa();
		
		
};

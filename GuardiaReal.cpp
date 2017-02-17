#include "GuardiaReal.h";

GuardiaReal::GuardiaReal()
{
	nombre = "";
	edad = 0;
	tipoSoldado = "";
	ataque = 0;
	defensa = 0;
	
}

void GuardiaReal::setNombre(string name)
{
	nombre = name;
}

void GuardiaReal::setEdad(int age)
{
	edad = age;
}

void GuardiaReal::setTipoSoldado(int soldier)
{
	if (soldier == 1)
		tipoSoldado = "Caballero";
	else if (soldier == 2)
		tipoSoldado = "Jinete";
	else if (soldier == 3)
		tipoSoldado = "Arquero";
}

void GuardiaReal::setAtaque(int attack)
{
	ataque = attack;
}

void GuardiaReal::setDefensa(int defense)
{
	defensa = defense;
}

string GuardiaReal::getNombre()
{
	return nombre;
}


int GuardiaReal::getEdad()
{
	return edad;
}


string GuardiaReal::getTipoSoldado()
{
	return tipoSoldado;
}


int GuardiaReal::getAtaque()
{
	return ataque;
}

int GuardiaReal::getDefensa()
{
	return defensa;
}

GuardiaReal::GuardiaReal()
{
	cout << "Objeto Guardia Real creado" << endl;
}

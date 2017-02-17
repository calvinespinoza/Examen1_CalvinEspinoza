#include "FamiliasNobles.h";

FamiliasNobles::FamiliasNobles()
{
	nombre = "";
	simboloEscudo = "";
	lema = "";
	cantPersonas = 0;
	ataque = 0;
	defensa = 0;
	
}

void FamiliasNobles::setNombre(string name)
{
	nombre = name;
}

void FamiliasNobles::setSimboloEscudo(string emblem)
{
	simboloEscudo = emblem;
}

void FamiliasNobles::setLema(string motto)
{
	lema = motto;
}


void FamiliasNobles::setCantPersonas(int people)
{
	cantPersonas = people;
}

void FamiliasNobles::setAtaque(int attack)
{
	ataque = attack;
}

void FamiliasNobles::setDefensa(int defense)
{
	defensa = defense;
}

string FamiliasNobles::getNombre()
{
	return nombre;
}


string FamiliasNobles::getSimboloEscudo()
{
	return simboloEscudo;
}

string FamiliasNobles::getLema()
{
	return lema;
}


int FamiliasNobles::getCantPersonas()
{
	return cantPersonas;
}


int FamiliasNobles::getAtaque()
{
	return ataque;
}

int FamiliasNobles::getDefensa()
{
	return defensa;
}

FamiliasNobles::FamiliasNobles()
{
	cout << "Objeto Pequeñas Familias Nobles creado" << endl;
}

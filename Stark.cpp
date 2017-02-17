#include "Stark.h";

Stark::Stark()
{
	jefe = "";
	cantLobos = 0;
	animalEmblema = "";
	lema = "";
	vector <FamiliasNobles*> familiasNobles;
	guerrero = "";
	cantIntegrantes = 0;
	
}

void Stark::setJefe(string boss)
{
	jefe = boss;
}

void Stark::setCantLobos(int wolves)
{
	cantLobos = wolves;
}

void Stark::setAnimalEmblema(string emblem)
{
	animalEmblema = emblem;
}

void Stark::setLema(string motto)
{
	lema = motto;
}

void Stark::setFamiliasNobles(FamiliasNobles* familias)
{
	this -> familiasNobles.push_back(familias);
}

void Stark::setGuerrero(string warrior)
{
	guerrero = warrior;
}

void Stark::setCantIntegrantes(int members)
{
	cantIntegrantes = members;
}

string Stark::getJefe()
{
	return jefe;
}

int Stark::getCantLobos()
{
	return cantLobos;
}

string Stark::getAnimalEmblema()
{
	return animalEmblema;
}

string Stark::getLema()
{
	return lema;
}

FamiliasNobles* Stark::getFamiliasNobles(int num)
{
	return this -> familiasNobles[num];
}

string Stark::getGuerrero()
{
	return guerrero;
}

int Stark::getCantIntegrantes()
{
	return cantIntegrantes;
}

Stark::Stark()
{
	cout << "Objeto Stark creado" << endl;
}

Stark::~Stark()
{
	cout << "Liberando Memoria de Stark" << endl;
	for (int i = 0; i < this -> familiasNobles.size(); i++)
	{
		delete this -> familiasNobles[i];
	}
	this -> familiasNobles.clear();
}
	

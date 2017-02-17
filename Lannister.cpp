#include "Lannister.h";

Lannister::Lannister()
{
	jefe = "";
	animalEmblema = "";
	lema = "";
	vector <GuardiaReal*> guardiasReales;
	cantDinero = 0;
	fuerzaMontana = 0;
	cantIntegrantes = 0;
	
}

void Lannister::setJefe(string boss)
{
	jefe = boss;
}

void Lannister::setAnimalEmblema(string emblem)
{
	animalEmblema = emblem;
}

void Lannister::setLema(string motto)
{
	lema = motto;
}

void Lannister::setGuardiaReal(GuardiaReal* guardia)
{
	this -> guardiasReales.push_back(guardia);
}

void Lannister::setCantDinero(int money)
{
	cantDinero = money;
}

void Lannister::setFuerzaMontana(int force)
{
	fuerzaMontana = force;
}

void Lannister::setCantIntegrantes(int members)
{
	cantIntegrantes = members;
}

string Lannister::getJefe()
{
	return jefe;
}


string Stark::getAnimalEmblema()
{
	return animalEmblema;
}

string Lannister::getLema()
{
	return lema;
}

GuardiaReal* Lannister::getGuardiaReal(int num)
{
	return this -> familiasNobles[num];
}

int Lannister::getCantDinero()
{
	return cantDinero;
}

int Lannister::getFuerzaMontana()
{
	return fuerzaMontana;
}

int Lannister::getCantIntegrantes()
{
	return cantIntegrantes;
}

Lannister::Lannister()
{
	cout << "Objeto Lannister creado" << endl;
}

Lannister::~Lannister()
{
	cout << "Liberando Memoria de Lannister" << endl;
	for (int i = 0; i < this -> guardiasReales.size(); i++)
	{
		delete this -> guardiasReales[i];
	}
	this -> guardiasReales.clear();
}
	

#include "Targaryen.h";

Targaryen::Targaryen()
{
	reina = "";
	animalEmblema = "";
	lema = "";
	vector <Dothraki*> Dothraki;
	cantDragones = 0;
	cantBarcos = 0;
	
}

void Targaryen::setReina(string queen)
{
	reina = queen;
}

void Targaryen::setAnimalEmblema(string emblem)
{
	animalEmblema = emblem;
}

void Targaryen::setLema(string motto)
{
	lema = motto;
}

void Targaryen::setDothraki(Dothraki* dothraki1)
{
	this -> Dothraki.push_back(dothraki1);
}

void Targaryen::setCantDragones(int dragons)
{
	cantDragones = dragons;
}

void Targaryen::setCantBarcos(int boats)
{
	cantBarcos = boats;
}

string Targaryen::getReina()
{
	return reina;
}


string Targaryen::getAnimalEmblema()
{
	return animalEmblema;
}

string Targaryen::getLema()
{
	return lema;
}

Dothraki* Targaryen::getDothraki(int num)
{
	return this -> Dothraki[num];
}

int Targaryen::getCantDragones()
{
	return cantDragones;
}


int Targaryen::getCantBarcos()
{
	return cantBArcos;
}

Targaryen::Targaryen()
{
	cout << "Objeto Targaryen creado" << endl;
}

Targaryen::~Targaryen()
{
	cout << "Liberando Memoria de Targaryen" << endl;
	for (int i = 0; i < this -> Dothraki.size(); i++)
	{
		delete this -> Dothraki[i];
	}
	this -> Dothraki.clear();
}

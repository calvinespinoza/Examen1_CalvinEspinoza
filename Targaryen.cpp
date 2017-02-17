#include "Targaryen.h"
#include <iostream>

using namespace std;

Targaryen::Targaryen()
{
	reina = "";
	animalEmblema = "";
	lema = "";
	vector <Dothraki*> dothraki;
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
	this -> dothraki.push_back(dothraki1);
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
	return this -> dothraki[num];
}

int Targaryen::getCantDragones()
{
	return cantDragones;
}


int Targaryen::getCantBarcos()
{
	return cantBarcos;
}
/*
Targaryen::~Targaryen()
{
	cout << "Liberando Memoria de Targaryen" << endl;
	for (int i = 0; i < this -> dothraki.size(); i++)
	{
		delete this -> dothraki[i];
	}
	this -> dothraki.clear();
}*/

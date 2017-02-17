#include "Dothraki.h"
#include <iostream>

using namespace std;

Dothraki::Dothraki()
{
	nombre = "";
	jefeBarbaro = "";
	nombreCaballo = "";
	colorCaballo = "";
	ataque = 0;
	defensa = 0;
	
}

void Dothraki::setNombre(string name)
{
	nombre = name;
}

void Dothraki::setJefeBarbaro(string boss)
{
	jefeBarbaro = boss;
}

void Dothraki::setNombreCaballo(string horse_name)
{
	nombreCaballo = horse_name;
}

void Dothraki::setColorCaballo(string horse_color)
{
	colorCaballo = horse_color;
}


void Dothraki::setAtaque(int attack)
{
	ataque = attack;
}

void Dothraki::setDefensa(int defense)
{
	defensa = defense;
}

string Dothraki::getNombre()
{
	return nombre;
}


string Dothraki::getJefeBarbaro()
{
	return jefeBarbaro;
}


string Dothraki::getNombreCaballo()
{
	return nombreCaballo;
}

string Dothraki::getColorCaballo()
{
	return colorCaballo;
}


int Dothraki::getAtaque()
{
	return ataque;
}

int Dothraki::getDefensa()
{
	return defensa;
}


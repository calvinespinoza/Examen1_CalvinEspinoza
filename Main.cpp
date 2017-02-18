#include <iostream>
#include <string>
#include <vector>
#include "Stark.h"
#include "Lannister.h"
#include "Targaryen.h"
#include "FamiliasNobles.h"
#include "GuardiaReal.h"
#include "Dothraki.h"

using namespace std;
int main()
{
	int opcion;
	int familia = 0, ejercito = 0, listar = 0;
	char resp = 'y';
	int cantFamilias = 0, cantDothraki = 0, cantGuardias = 0;
	
	Stark stark;
	Lannister lannister;
	Targaryen targaryen;
	
	
	vector <Dothraki*> v_dothraki;
	vector <GuardiaReal*> v_guardiasReales;
	vector <FamiliasNobles*> v_familiasNobles;
	
	while (resp == 'y' || resp == 'Y'){
		cout << "\nMENU\n1. Agregar Familia\n2. Agregar Ejercito \n3. Listar\n";
		cout << "4. Eliminar\n5. Simulación\n6. Salir\n\n";
		cin >> opcion;
		cout << endl;
		
		if (opcion == 1) {
				cout << "ELEGIR FAMILIA\n1. Stark\n2. Lannister\n";
				cout << "3. Targaryen\n";
				cin >> familia;
				
				if(familia == 1) {
						string boss, emblem, motto, warrior;
						int lobos, integrantes;
						
						cout << endl << "Jefe:" << endl;
						cin >> boss;
						
						cout << endl << "Animal Emblema:" << endl;
						cin >> emblem;
						
						cout << endl << "Lema:" << endl;
						cin >> motto;
					
						cout << endl << "Guerrero:" << endl;
						cin >> warrior;
						
						cout << endl << "Cantidad de Lobos:" << endl;
						cin >> lobos;
						
						cout << endl << "Cantidad de Integrantes:" << endl;
						cin >> integrantes;
						
						stark.setJefe(boss);
						stark.setCantLobos(lobos);
						stark.setAnimalEmblema(emblem);
						stark.setLema(motto);
						stark.setGuerrero(warrior);
						stark.setCantIntegrantes(integrantes);
					}
					
					if (familia == 2) {
						string boss1, emblem1, motto1;
						int dinero, fuerza, integrantes1;
						
						cout << endl << "Jefe:" << endl;
						cin >> boss1;
						
						cout << endl << "Animal Emblema:" << endl;
						cin >> emblem1;
						
						cout << endl << "Lema:" << endl;
						cin >> motto1;
					
						cout << endl << "Cantidad de Dinero:" << endl;
						cin >> dinero;
						
						cout << endl << "Fuerza de Montaña:" << endl;
						cin >> fuerza;
						
						cout << endl << "Cantidad de Integrantes:" << endl;
						cin >> integrantes1;
						
						lannister.setJefe(boss1);
						lannister.setAnimalEmblema(emblem1);
						lannister.setLema(motto1);
						lannister.setCantDinero(dinero);
						lannister.setFuerzaMontana(fuerza);
						lannister.setCantIntegrantes(integrantes1);
						
					}
					
					if (familia == 3) {
						string queen, emblem2, motto2;
						int dragons, boats;
						
						
						cout << endl << "Reina:" << endl;
						cin >> queen;
						
						cout << endl << "Animal Emblema:" << endl;
						cin >> emblem2;
						
						cout << endl << "Lema:" << endl;
						cin >> motto2;
					
						cout << endl << "Cantidad de Dragones:" << endl;
						cin >> dragons;

						cout << endl << "Cantidad de Barcos:" << endl;
						cin >> boats;
						
						
						targaryen.setReina(queen);
						targaryen.setAnimalEmblema(emblem2);
						targaryen.setLema(motto2);
						targaryen.setCantDragones(dragons);
						targaryen.setCantBarcos(boats);
					}
				}
				
				if (opcion == 2) {
						cout << "ELEGIR EJERCITO\n1. Familias Nobles (Stark)\n";
						cout << "2. Guardia Real (Lannister)\n";
						cout << "3. Dothraki (Targaryen)\n";
						cin >> ejercito;
						
						if (ejercito == 1) {
									string name, escudo, lema;
									int personas, ataque1, defensa1;
									
									
									cout << endl << "Nombre:" << endl;
									cin >> name;
						
									cout << endl << "Simbolo Escudo:" << endl;
									cin >> escudo;
						
									cout << endl << "Lema:" << endl;
									cin >> lema;
					
									cout << endl << "Cantidad de Personas:" << endl;
									cin >> personas;

									cout << endl << "Ataque:" << endl;
									cin >> ataque1;
									
									cout << endl << "Defensa:" << endl;
									cin >> defensa1;
									
									FamiliasNobles* familias = new FamiliasNobles();
									cantFamilias++;
									
									familias -> setNombre(name);
									familias -> setSimboloEscudo(escudo);
									familias -> setLema(lema);
									familias -> setCantPersonas(personas);
									familias -> setAtaque(ataque1);
									familias -> setDefensa(defensa1);
									
									stark.setFamiliasNobles(familias);
							}
							
							if (ejercito == 2) {
									string name1;
									int edad, soldado, ataque2, defensa2;
									
									
									cout << endl << "Nombre:" << endl;
									cin >> name1;
						
									cout << endl << "Edad:" << endl;
									cin >> edad;
						
									cout << endl << "Soldado\n1. Caballero\n2. Jinete\n3. Arquero:" << endl;
									cin >> soldado;

									cout << endl << "Ataque:" << endl;
									cin >> ataque2;
									
									cout << endl << "Defensa:" << endl;
									cin >> defensa2;
									
									GuardiaReal* real = new GuardiaReal();
									cantGuardias++;
									
									real -> setNombre(name1);
									real -> setEdad(edad);
									real -> setTipoSoldado(soldado);
									real -> setAtaque(ataque2);
									real -> setDefensa(defensa2);
		
									
									lannister.setGuardiaReal(real);
							}
									
							if (ejercito == 3) {
									string name2, barbaro, nombreCab, color;
									int ataque3, defensa3;
									
									cout << endl << "Nombre:" << endl;
									cin >> name2;
						
									cout << endl << "Jefe Barbaro" << endl;
									cin >> barbaro;
									
									cout << endl << "Nombre de Caballo" << endl;
									cin >> nombreCab;
									
									cout << endl << "Color de Caballo:" << endl;
									cin >> color;

									cout << endl << "Ataque:" << endl;
									cin >> ataque3;
									
									cout << endl << "Defensa:" << endl;
									cin >> defensa3;
									
									Dothraki* dothraki = new Dothraki();
									cantDothraki++;
									
									dothraki -> setNombre(name2);
									dothraki -> setJefeBarbaro(barbaro);
									dothraki -> setNombreCaballo(nombreCab);
									dothraki -> setColorCaballo(color);
									dothraki -> setAtaque(ataque3);
									dothraki -> setDefensa(defensa3);
									
									
									targaryen.setDothraki(dothraki);
								}
							
						}
	
					if (opcion == 3) {
						cout << "ELEGIR FAMILIA\n1. Stark\n2. Lannister\n";
						cout << "3. Targaryen\n";
						cin >> listar;
						
						if (listar == 1) {
								cout << endl << "Jefe: " << stark.getJefe();
								cout << endl << "Lobos: "  << stark.getCantLobos();
								cout << endl << "Emblema: " << stark.getAnimalEmblema();
								cout << endl << "Lema: " << stark.getLema();
								cout << endl << "Familias: ";
								for (int i = 0; i < cantFamilias; i++)
									cout << endl << stark.getFamiliasNobles(i) -> getNombre();
									
								cout << endl  << "Guerrero: " << stark.getGuerrero();
								cout << endl  << "Integrantes: " << stark.getCantIntegrantes();
						}
							
						if (listar == 2) {
								cout << endl << "Jefe: " << lannister.getJefe();
								cout << endl << "Emblema: " << lannister.getAnimalEmblema();
								cout << endl << "Lema: " << lannister.getLema();
								cout << endl << "Guardias Reales: ";
								for (int i = 0; i < cantGuardias; i++)
									cout << endl << lannister.getGuardiaReal(i) -> getNombre();
								cout << endl << "Dinero: " << lannister.getCantDinero();
								cout << endl  << "Fuerza de Montaña: " << lannister.getFuerzaMontana();
								cout << endl  << "Integrantes: " << lannister.getCantIntegrantes();
						}
							
						if (listar == 3) {
								cout << endl << "Reina: " << targaryen.getReina();
								cout << endl << "Emblema: " << targaryen.getAnimalEmblema();
								cout << endl << "Lema: " << targaryen.getLema();
								cout << endl << "Dothraki: ";
								for (int i = 0; i < cantDothraki; i++)
									cout << endl << targaryen.getDothraki(i) -> getNombre();
								cout << endl  << "Dragones: " << targaryen.getCantDragones();
								cout << endl  << "Barcos: " << targaryen.getCantBarcos();
							}
						}
						
					if (opcion == 4) {
					}
					
					if(opcion == 6) {
						return 0;
					}
						
						
						
		}
		
}


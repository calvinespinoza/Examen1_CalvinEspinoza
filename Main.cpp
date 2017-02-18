#include <iostream>
#include "Stark.h"
#include "Lannister.h"
#include "Targaryen.h"
#include "FamiliasNobles.h"
#include "GuardiaReal.h"
#include "Dothraki.h"

int main()
{
	int opcion;
	int familia = 0, ejercito = 0;
	char resp = 'y';
	
	Stark stark;
	Lannister lannister;
	Targaryen targaryen;
	return 0;

	while (resp == 'y' || resp = 'Y'){
		cout << "\nMENU\n1. Agregar Familia\n2. Agregar Ejercito \n3. Listar\n";
		cout << "4. Eliminar\n5. Simulación\n6. Salir";
		cin >> opcion;
		cout << endl;
		
		switch (opcion) {
		
			case 1: 
				cout << "ELEGIR FAMILIA\n1. Stark\n2. Lannister\n";
				cout << "3. Targaryen\n";
				cin >> familia;
				
				switch (familia) {
					case 1:
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
						break;
					
					case 2:
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
						lannister.setLema(motto);
						lannister.setCantDinero(dinero);
						lannister.setFuerzaMontana(fuerza);
						lannister.setCantIntegrantes(integrantes1);
						
						break;
						
					case 3:
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
						break;
						
					default:
						cout << "No valido";
						break;
						
				}
				
				case 2:
						cout << "ELEGIR EJERCITO\n1. Familias Nobles (Stark)\n";
						cout << "2. Guardia Real (Lannister)\n";
						cout << "3. Dothraki (Targaryen)\n";
						cin >> ejercito;
						
						switch (ejercito){
						
							case 1:
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
									
									familias.setNombre(name);
									familias.setSimboloEscudo(escudo);
									familias.setLema(lema);
									familias.setCantPersonas(personas);
									familias.setAtaque(ataque1);
									familias.setDefensa(defensa1);
									
									stark.setFamiliasNobles(familias);
									break;
							
							case 2:
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
									
									familias.setNombre(name);
									familias.setSimboloEscudo(escudo);
									familias.setLema(lema);
									familias.setCantPersonas(personas);
									familias.setAtaque(ataque1);
									familias.setDefensa(defensa1);
									
									stark.setFamiliasNobles(familias);
									break;
									
								
						
						
						
		}
}

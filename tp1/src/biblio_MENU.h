/*
 * biblio_MENU.h
 *
 *  Created on: 25 sept 2022
 *      Author: ema_9
 */

#ifndef BIBLIO_MENU_H_
#define BIBLIO_MENU_H_
// menu
int menu(int hosp,int com,int trans, int arq, int def,int medio,int del );
//menu_ mantenimiento
int ingresarHospedaje(int nu1, int* nu2);
int ingresarComida(int nu1,int* nu2);
int ingresarTransporte(int nu1, int* nu2);
//menu_jugadores
int ingresarSubmenu(int nu1);
void opcionesSubmenu(int nu1,int nu22 ,int nu33,int nu44, int nu55, int nu66, int nu77, int* nu2,int* nu3,int* nu4,int* nu5,int* nu6,int* nu7);
void pedirNumeroCamisetas();
int ingresarSubmenuDos(int nu1);
void opcionesSubmenuDos(int nu1,int nu22,int nu33, int nu44, int nu55,int* nu2,int* nu3,int* nu4,int* nu5);




#endif /* BIBLIO_MENU_H_ */

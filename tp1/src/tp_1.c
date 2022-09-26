/*
 ============================================================================
 Name        : tp_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblio_MENU.h"
#include "BIBLIO_CALCULOS.h"


int main(void) {
	setbuf(stdout,NULL);
	//MENU
	int menupricipal;
	int submenu;
	int submenuDos;

	//MANTENIMIENTO
	int hospedaje=0;
	int comida=0;
	int transporte=0;
	int acumuladorHospedaje=0;
	int acumuladorComida=0;
	int acumuladorTransporte=0;
	int costoTotalMantenimiento;
	float aumentoMantenimiento;
	int mantenimientoFinal;

	//jugadores
	int arquero=0;
	int defenzor=0;
	int mediocampista=0;
	int delantero=0;
	int contadorArquero=0;
	int contadorDefenzor=0;
	int contadorMediocampista=0;
	int contadorDelantero=0;


	//confederacion
	int afc=1;
	int caf=1;
	int concacaf=1;
	int conmebol=1;
	int uefa=1;
	int ofc=1;
	int contadoAfc=0;
	int contadorCaf=0;
	int contadorConcacaf=0;
	int contadorConmebol=0;
	int contadorUefa=0;
	int contadorOfc=0;

	//promedio
	float promedioAFC;
	float promedioCAF;
	float promedioCONCACAF;
	float promedioCONMEBOL;
	float promedioUEFA;
	float promedioOFC;

	//banderas
	int flagUno=0;
	int flagDos=0;
	int flagTres=0;
	int flagMantenimiento=0;




	do
	{
		menupricipal = menu(acumuladorHospedaje,acumuladorComida,acumuladorTransporte,contadorArquero,contadorDefenzor,contadorMediocampista,contadorDelantero);

		switch(menupricipal)
		{
		case 1:
			hospedaje = ingresarHospedaje(hospedaje,&acumuladorHospedaje);
			comida=ingresarComida(comida,&acumuladorComida);
			transporte=ingresarTransporte(transporte,&acumuladorTransporte);
			flagUno=1;
			break;
		case 2:
			submenu=ingresarSubmenu(submenu);
			opcionesSubmenu(submenu,afc,caf,concacaf,conmebol,uefa,ofc,&contadoAfc,&contadorCaf,&contadorConcacaf,&contadorConmebol,&contadorOfc,&contadorUefa);
			pedirNumeroCamisetas();
			submenuDos=ingresarSubmenuDos(submenuDos);
			opcionesSubmenuDos(submenuDos,arquero,defenzor,mediocampista,delantero,&contadorArquero,&contadorDefenzor,&contadorMediocampista,&contadorDelantero);
			flagDos=1;

			break;
		case 3:
			if(flagUno == 1 && flagDos == 1)
			{
			promedioAFC=calcularPromedio(contadoAfc);
			promedioCAF=calcularPromedio(contadorCaf);
			promedioCONCACAF=calcularPromedio(contadorConcacaf);
			promedioCONMEBOL=calcularPromedio(contadorConmebol);
			promedioUEFA=calcularPromedio(contadorUefa);
			promedioOFC=calcularPromedio(contadorOfc);
			costoTotalMantenimiento=calcularMantenimiento(acumuladorHospedaje,acumuladorComida,acumuladorTransporte);
			flagMantenimiento = calcularAumento(costoTotalMantenimiento,contadoAfc,contadorCaf,contadorConcacaf,contadorConmebol, contadorUefa,contadorOfc,&aumentoMantenimiento);
			mantenimientoFinal=calcularMantenimientoFinal(costoTotalMantenimiento, aumentoMantenimiento);

			printf("\n********Los calculos estan echos");
			}
			else
			{
				printf("Error, primero hacer opcion 1 y 2");
			}
			flagTres=1;



			break;
		case 4:
			if(flagTres==1)
			{
			mostrarResultados(promedioAFC, promedioCAF, promedioCONCACAF, promedioCONMEBOL, promedioUEFA,promedioOFC);
			mostrarTotalMantenimiento(flagMantenimiento ,costoTotalMantenimiento,aumentoMantenimiento,mantenimientoFinal);
			}
			else
			{
				printf("\nPrimero tenes que realizar los calcular (opcion 3)");
			}
			break;
		case 5:
			printf("\n*********saliendo*********");
			break;
		default:
			printf("\nERROR, Ingrese una opcion valida");
			break;
		}

	}while(menupricipal !=5);

	return EXIT_SUCCESS;
}


